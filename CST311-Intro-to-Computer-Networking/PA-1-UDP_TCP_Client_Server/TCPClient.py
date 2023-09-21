# Group 5 : R2T
# Date: 09/06/2022
# Title: TCP Client
# Description: TCP client socket that sends a lower case string to the server and receives a response.



from socket import *
# returns the host IP
serverName = gethostbyname(gethostname())
serverPort = 12000
#create  TCP socket for server, remote port 12000
clientSocket = socket(AF_INET, SOCK_STREAM)
clientSocket.connect((serverName, serverPort))
sentence = input("Input lowercase sentence: ")
#no need to attach server name, port
clientSocket.send(sentence.encode())
modifiedSentence = clientSocket.recv(1024)
print("From Server: ", modifiedSentence.decode())
clientSocket.close()