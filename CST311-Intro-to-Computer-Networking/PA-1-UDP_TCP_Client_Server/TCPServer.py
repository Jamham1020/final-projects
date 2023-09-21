# Group 5 : R2T
# Date: 09/06/2022
# Title: TCP Server
# Description: TCP server socket receives a message from the client 
# and converts the string to upper case letter and sends it back to the client.

from socket import *
serverPort = 12000

#create TCP welcoming socket
serverSocket = socket(AF_INET, SOCK_STREAM)
serverSocket.bind(('', serverPort))
serverSocket.listen(1) #server begins listening for incoming TCP requests
print("The server is ready to receive")
while True:
    connectionSocket, addr = serverSocket.accept()
    sentence = connectionSocket.recv(1024).decode()
    capitalizedSentence = sentence.upper()
    connectionSocket.send(capitalizedSentence.encode())
    connectionSocket.close()