# PA3 - TCP-Client-Server

## Purpose 

The purpose of this assignment is to satisfy one of the stated outcomes in the syllabus: 

a. Develop simple software programs using sockets to achieve communication between two (or more) computers. 
 
You will write the program in Python where the interface to the TCP/IP application programming interface is similar to other C-family programming languages. 

## Context 

The Transmission Control Protocol(TCP) allows for connection-oriented sessions between clients and a server. This means that multiple clients can connect to a single server and the communication is managed in separate sessions for each client. The initial connection setup is done once and then packets are exchanged until the connection is closed. A common pattern is for a TCP server to start up and allow multiple connections; in fact, this is exactly how HTTP web servers work. 
There are an endless number of applications that rely on the kind of communication service that you will develop in this assignment, here are a few examples: 
 ●	HTTP web server 
 ●	A chat service, such as Google Hangouts or Slack 
 ●	Data delivery service, such as the GPS position data in the http://odss.mbari.org backend 

Many successful businesses have been built by building rich applications on top of a TCP/IP service such as the one you will create in this assignment. 

## Task 

Your task is to write client code that satisfies the following requirements: 

### Client code 

There are two clients, X and Y (both essentially identical) that will communicate with a server. Clients X and Y will each open a TCP socket to your server and wait until the server establishes a connection with both the clients. In the next step, one of the clients sends a message to your server followed by the other client.. The message contains the name of the client followed by a name (e.g., “Client X: Alice”, “Client Y: Bob”).  
Later clients receive a message back from the server, indicating which message arrived at the Server first and which arrived second. The clients should print the message that they sent to the server, followed by the reply received from the server. The following figures explain the problem. 
 
![image](https://github.com/Jamham1020/final-projects/assets/64275401/fc252d32-518d-4a52-ab65-e7497a557c1a)

![image](https://github.com/Jamham1020/final-projects/assets/64275401/5da7b9f4-e378-4f17-a3a5-04c3038700ac)

The response message does not rely on the order of the connection establishment. If the connections are established in a different order the response will still be dependent only on the order of the messages received at the server.

![image](https://github.com/Jamham1020/final-projects/assets/64275401/19ad8cdf-2a6e-4248-a3e6-4f0d80627b2f)

### Server code 

The server will accept connections from both clients and after it has received messages from both X and Y, the server will print their messages and then send an acknowledgment back to your clients. The acknowledgment from the server should contain the sequence in which the client messages were received (“X: Alice received before Y: Bob”, or “Y: Bob received before X: Alice”). After the server sends out this message it should output a message saying - “Sent acknowledgment to both X and Y”. Your server can then terminate.  

The server sits in an infinite loop listening for incoming TCP packets. When a packet comes, the server simply sends it back to the client. You can use the TCP server/client programs from the previous programming assignment as templates to start and then modify it to build your programming assignment.   

## Expected output

Server is started ….

![image](https://github.com/Jamham1020/final-projects/assets/64275401/484bf97c-0560-4c72-8a56-662c04a00a40)

One client requests a connection and is accepted at the server (server calls it X)….

![image](https://github.com/Jamham1020/final-projects/assets/64275401/5c90bf37-a17f-4e8a-beb7-61a27aecc757)

Second client requests a connection and is accepted at the server (server calls it Y) ….

![image](https://github.com/Jamham1020/final-projects/assets/64275401/efaab4aa-24a1-409c-b413-0798b83139fe)

## Case 1: When you type a message from Client X first:

Note: Client X connected before Client Y to the server.

![image](https://github.com/Jamham1020/final-projects/assets/64275401/20a446b0-710c-4d3c-93bb-5b02733f7c11)

![image](https://github.com/Jamham1020/final-projects/assets/64275401/b2a9ee20-e85f-4fbd-9499-2b5af6d2d17c)

## Case 2: When you type a message from Client Y first:

Note: Client X connected before Client Y to the server.

![image](https://github.com/Jamham1020/final-projects/assets/64275401/8025471c-600c-487b-afe3-63a6ba0a5719)

![image](https://github.com/Jamham1020/final-projects/assets/64275401/c5a0d4d4-1482-4177-8ddb-7eab1a26c742)

## Message Format 

The messages in this assignment are formatted in a simple way. The client message must look like: 

Client X: Alice 
Client Y: Bob

The messages from server to client must look like (depending on the order of the received messages): 

X: Alice received before Y: Bob 
OR 
Y: Bob received before X: Alice 

## Grading Criteria 

Your client and server programs need to demonstrate an understanding of the connection-oriented nature of the TCP protocol. 

Specifically, your client program should:
1.	(5 points) You must use TCP sockets; you will need to establish a connection first, since it is a connection oriented protocol.
2.	(5 points) Clients must initiate the connection by sending their connection requests to the server one client at a time.

Specifically, your server program should: 

3.	(5  points) The server must accept connections from both clients first BEFORE receiving the messages from either client. 

4.	(5 points) Server establishes the first client that made a connection as Client X and the second one as client Y.

5.	(5 points) After establishing a connection with both Clients, Server sends a message to both clients stating that a connection has been established. The message from the server must indicate which client is X and which client is Y. (Message to clients must look like: “Client X connected” or “Client Y connected”.)

6.	(5 points) Next, the server receives messages from both clients (in any order) and establishes which message it received first.

7.	(10 points) Server sends acknowledgements to both clients stating which message was received first. (Message to clients must look like: “Y: First_message received before X: Second_message” or “X: First_message received before Y: Second_message”.)

8.	(10 points) The response string from Server to Clients (“X: First_message received before Y: Second_message”, or “Y: First_message received before X: Second_message”) must be in the order the messages from Client X or Client Y are received at the server and NOT the order in which the clients X and Y connected to the server.  Note: You will need multithreading and a way to share data between threads to achieve this.

9.	(10 points) Your program should print out the messages received by the client and server at the receiving end. 

10.	(10 points) Execute your programs on your mininet virtual machine. 

11.	(20 points) Explain why you need multithreading to solve this problem. Put this in a comment at the top of your server code. 

12.	(10 points) Program must be readable and well documented. All files must be in order as indicated in the “What to turn in” section.








