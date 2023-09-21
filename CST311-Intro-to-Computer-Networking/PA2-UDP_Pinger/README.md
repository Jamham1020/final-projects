# PA2 - UDP_Pinger

## UDP Pinger 
In this assignment, you will learn the basics of socket programming for UDP in Python. You will learn how to send and receive datagram packets using UDP sockets and also, how to set a proper socket timeout. Throughout the assignment, you will gain familiarity with a Ping application and its usefulness in computing statistics such as packet loss rate. 

You will first study a simple Internet ping server written in Python, and implement a corresponding client. The functionality provided by these programs is similar to the functionality provided by standard ping programs available in modern operating systems. However, these programs use a simpler protocol, UDP, rather than the standard Internet Control Message Protocol (ICMP) to communicate with each other. The ping protocol allows a client machine to send a packet of data to a remote machine, and have the remote machine return the data back to the client unchanged (an action referred to as echoing). Among other uses, the ping protocol allows hosts to determine round-trip times to other machines. 

You are given the complete code for the Ping server below. Your task is to write the Ping client. 
 
## Server Starter Code 

The following code fully implements a ping server. You can use the server code given below as starter code for the assignment. You need to compile and run this code before running your client program. 

In this server code, 30% of the client’s packets are simulated to be lost. You should study this code carefully, as it will help you write your ping client. 

```
# Server.py
# We will need the following module to generate
# randomized lost packets
import random
from socket import *

# Create a UDP socket
# Notice the use of SOCK_DGRAM for UDP packets
serverSocket = socket(AF_INET, SOCK_DGRAM)
# Assign IP address and port number to socket
serverSocket.bind(('', 12000))
pingnum = 0
while True:
    # Count the pings received
    pingnum += 1
    # Generate random number in the range of 0 to 10
    rand = random.randint(0, 10)
    # Receive the client packet along with the
    # address it is coming from
    message, address = serverSocket.recvfrom(1024)
    # If rand is less is than 4, and this not the
    # first "ping" of a group of 10, consider the
    # packet lost and do not respond
    if rand < 4 and pingnum % 10 != 1:
        continue
    # Otherwise, the server responds
    serverSocket.sendto(message, address)
```

The server sits in an infinite loop listening for incoming UDP packets. When the first packet, or a succeeding packet when a randomized integer is greater than or equal to 4, comes in, the server simply capitalizes the encapsulated data and sends it back to the client. 

## Packet Loss 

UDP provides applications with an unreliable transport service. Messages may get lost in the network due to router queue overflows, faulty hardware or some other reasons. Because packet loss is rare or even non-existent in typical campus networks, the server in this assignment injects artificial loss to simulate the effects of network packet loss. The server creates a variable randomized integer which determines whether a particular incoming packet is lost or not. 


## Client Code 

The client should send 10 pings to the server. See the Message Format below for each ping to be sent to the Server. Also print the message that is sent to the server. 
 
Because UDP is an unreliable protocol, a packet sent from the client to the server may be lost in the network, or vice versa. For this reason, the client cannot wait indefinitely for a reply to a ping message. You should get the client to wait up to one second for a reply; if no reply is received within one second, your client program should assume that the packet was lost during transmission across the network. You will need to look up the Python documentation to find out how to set the timeout value on a datagram socket. If the packet is lost, print “Request timed out”. 
 
The program must calculate the round-trip time for each packet and print it out individually. Have the client print out the information similar to the output from doing a normal ping command – see sample output below. Your client software will need to determine and print out the minimum, maximum, and average RTTs at the end of all pings from the client along with printing out the number of packets lost and the packet loss rate (in percentage). Then compute and print the estimated RTT, the DevRTT and the Timeout interval based on the RTT results. 
 
The initial estimated RTT is just the first Sample RTT – the results of your first ping.  The initial DevRTT is first Sample RTT divided by 2.   The initial Timeout interval is set to 1 minute.  The formulas for calculating the estimated RTT, DevRTT, and Timeout interval for each succeeding ping are contained in the slides on the last page of this document and on pages 242-243 of the textbook.1


## Execution and Testing

You are to run and test your program in a two host, one switch mininet emulation, using delay parameters that match the real world.  The client program should be run on one host (h1) and the server program should be run on the second host (h2).  To set up the test environment, start mininet with the basic topology, and set speed of links to 100 Mbps and delay to 25 ms per link.  (By setting delay to 25 ms, the RTT will be about 100 ms – this is the approximate RTT between San Francisco and Boston.)  Here is the command to set up the test environment:

```
mininet@mininet-vm:~$ sudo mn --link tc,bw=100,delay=25ms
```

## Sample output of ping to Google.com 

Here is a sample output from a ping of Google 4 times: 
 
Pinging google.com [216.58.195.78] with 32 bytes of data: 
Reply from 216.58.195.78: bytes=32 time=13ms TTL=54 
Reply from 216.58.195.78: bytes=32 time=14ms TTL=54 
Reply from 216.58.195.78: bytes=32 time=16ms TTL=54 Reply from 216.58.195.78: bytes=32 time=13ms TTL=54 Ping statistics for 216.58.195.78: 
 Packets: Sent = 4, Received = 4, Lost = 0 (0% loss), Approximate round trip times in milli-seconds: 
 Minimum = 13ms, Maximum = 16ms, Average = 14ms  
 
## Expected output of your program 

### Server Output: 

![image](https://github.com/Jamham1020/final-projects/assets/64275401/ec87057c-baec-4417-8ded-d72d0e5b76c6)

### Client Output : 

(Values in sample below are smaller than your expected output)

![image](https://github.com/Jamham1020/final-projects/assets/64275401/80964894-cade-4e3c-adc3-2fbcbc96ee40)


## Grading Objectives 

(30 points) You must complete this program in the Mininet VM. The screenshots for the running code and the results in the Output checker file must come from executing your code on the mininet VM.

(5 points) Ping messages must be sent using UDP.  Server must change the received message to uppercase before sending the message back to the client.

(5 + 5 points) Print the request from client and response from server messages on both the client and  server machines.

(8 x 5 points) Calculate and print the following on the client side in milliseconds:

 - Round trip time (RTT) - If the server doesn’t respond, print “Request timed out”.
 - Minimum RTT
 - Maximum RTT
 - Average RTT (Leave out lost packets from average calculation)
 - Estimated RTT. Consider alpha = 0.125. (Look at slides at the end for formulae.)
 - Deviation RTT. Consider beta = 0.25. (Look at slides at the end for formulae.)
 - Timeout Interval (Look at slides at the end for formulae.)
 - Packet loss percentage
   
(5 points) You must write the client code to do the assignment with the calculations in 4 above without the use of a list (or array). Find an efficient and effective use of storage and program speed. 

(5 points) Programs must be well documented.

(5 points) Submission files are in order. (Look at the “What to hand in” section.)

(50 points) Teamwork grade: (50 points) Each team member will evaluate other 

## Footnotes: 
1. The estimated RTT, DevRTT, and Timeout interval are actually only used with TCP.  These calculations are included in this programming assignment to give you experience working with these parameters.  
2. RTT Slides: 

![image](https://github.com/Jamham1020/final-projects/assets/64275401/0b1a07bb-c855-4a87-ad8a-2944a4884d0c)

![image](https://github.com/Jamham1020/final-projects/assets/64275401/fc06ea90-0b13-4262-9300-8f563466a13e)
