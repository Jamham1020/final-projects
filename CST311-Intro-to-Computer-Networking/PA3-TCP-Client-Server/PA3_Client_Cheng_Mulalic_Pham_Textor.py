# PA3_Client_Cheng_Mulalic_Pham_Textor.py
# Team 5: Angela Cheng, Denis Mulalic, Janet Pham, Ben Textor

from socket import *

serverName = gethostname()
serverPort = 12000
BUFFER = 1024

try:
    clientSocket = socket(AF_INET, SOCK_STREAM)
    clientSocket.connect((serverName,serverPort))
except error:
    print("Unable to connect")
    exit(1)

#receives the msg from server
print("Waiting for other client....")

#receives the handshake msg from server
connectionStatus = clientSocket.recv(BUFFER)
print(connectionStatus.decode())
sentence = input("Enter message to send to server: ")
clientSocket.send(sentence.encode())

#accepts awk msg from server
awkMsg = clientSocket.recv(BUFFER)
print(awkMsg.decode())
clientSocket.close()
