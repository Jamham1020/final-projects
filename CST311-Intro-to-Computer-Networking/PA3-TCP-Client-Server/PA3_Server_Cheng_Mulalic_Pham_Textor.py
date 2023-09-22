# PA3_Server_Cheng_Mulalic_Pham_Textor.py
# Team 5: Angela Cheng, Denis Mulalic, Janet Pham, Ben Textor

# Question: 
# Explain why you need multithreading to solve this problem.
	# We need multithreading because client X and client Y would be unable to send messages in different orders.
	# Each process allows both sending and receiving with multithreading.            

from socket import *
from threading import *
from time import *
#serverPort = 12000

msgCount = 0 #counts the message that goes to the server
firstClient = "" #name of the first client for connection

#mutex variables
msgCountLock = Lock() 
msgCV = Condition(msgCountLock) #wait for server to receive both messages

#class for client thread
class ClientConnection(Thread):
	def __init__(self, ip, port, connection, clientID):
		Thread.__init__(self)
		self.ip = ip
		self.port = port
		self.connection = connection
		self.clientName = ""
		self.ackMsg = ""

		# assign client's name to thread and set ackMsg message 
		if (clientID == 1):
			print("Accepted first connection, calling it client X ")
			self.clientName = "X"
			self.ackMsg = "From Server: Client X Connected"
		else:
			print("Accepted second connection, calling it client Y")
			self.clientName = "Y"
			self.ackMsg = "From Server: Client Y Connected"

	# sets the message rcvd counter and check whether or not its the first msg
	def setMsgCounter(self):
		global msgCV
		global msgCount
		global firstClient
		msgCV.acquire() #update msg count
		
		msgCount = msgCount + 1

		#first msg received, set first client name
		if(msgCount == 1):
			firstClient = self.clientName
		msgCV.notify() #notify the thread that the message has been received
		msgCV.release() # lock is released

	# returns the ack message
	def getAckMsg(self):
		return self.ackMsg
	# return the client's name
	def getClientName(self):
		return self.clientName
	# send client ack message
	def sendAckMsg(self):
		self.connection.send(self.getAckMsg().encode())
	# return broadcasted message
	def getServerBroadcast(self):
		self.serverBroadcast = "Client" + self.clientName + ": " + self.clientMsg
		return self.serverBroadcast
	#sends message to client
	def sendMsg(self, message):
		self.connection.send(message.encode())
	#rcvd message from client
	def rcvdClientMsg(self):
		print("Client", self.clientName, " sent message ", msgCount, ": ", self.clientMsg)

	def run(self):
		self.clientMsg = ""
		global msgCount
		while True:
			self.clientMsg = self.connection.recv(1024).decode()
			if not self.clientMsg:
				#close client connection
				break
			else:
				self.setMsgCounter()
				self.rcvdClientMsg()
		self.connection.close()

# broadcasts the order of message received to all clients
def createBroadcastMsg(connections, firstClient):
	if firstClient == "X":
		broadcastMsg = f"{connections[0].getServerBroadcast()} before {connections[1].getServerBroadcast()}"
	else:
		broadcastMsg = f"{connections[1].getServerBroadcast()} before {connections[0].getServerBroadcast()}"
	return broadcastMsg

# broadcasts ack message to clients
def sendBroadcastAck(connections, broadcastMsg):
	for c in connections:
		c.sendMsg(broadcastMsg)
		
		
# Method: Main
def main():
	SERVER_PORT = 12000
	BUFFER_SIZE = 1024
	serverSocket = socket(AF_INET,SOCK_STREAM) # Assign IP address and port number to socket
	serverSocket.bind(('',SERVER_PORT))

	# hold the connection threads
	connections = []

	# creating 2 parameters for 2 connections in the queue
	serverSocket.listen(2) 
	print ("The server is waiting to receive 2 connections....\n")
	clientID = 1 # identify the client

	while True:
		(connectionSocket, (ip, port)) = serverSocket.accept()
		newConnection = ClientConnection(ip,port,connectionSocket, clientID)
		newConnection.start()
		connections.append(newConnection)
		clientID = clientID + 1

		# check to make sure there is more than 1 client before connecting
		if(len(connections) > 1):
			for c in connections:
				c.sendAckMsg()
			break
	# wait for both connections to receive a message
	print("\nWaiting to receive messages from client X and client Y....\n")
	msgCV.acquire()
	while(msgCount != 2):
		msgCV.wait() # wait for thread notification 
	msgCV.release()

	# broadcasts an ack msg to all clients
	broadcastMsg = createBroadcastMsg(connections, firstClient) 
	sendBroadcastAck(connections, broadcastMsg)
	print("\nWaiting a bit for clients to close their connections")

	for c in connections:
		c.join()
	print("Done")

if __name__ == "__main__":
	main()




