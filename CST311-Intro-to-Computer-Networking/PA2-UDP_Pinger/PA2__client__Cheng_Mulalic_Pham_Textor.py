# PA2_<client>_Cheng_Mulalic_Pham_Textor
# Teammate: Angela Cheng, Denis Mulalic, Janet Pham, Ben Textor
# We will need to send 10 pings to the server
# program and keep track of the RTTs of each ping.

from socket import *
from time import *
from decimal import Decimal

# Specify socket address
serverName = "10.0.0.2"
serverPort = 12000

# Declare values
# include:
#   initialize time sent, time received, latency time (RTT), deviation RTT, estimated RTT, number of returned pings, min and max RTT
#   estimated RTT with its value - 0.125, deviation RTT with its value - 0.25
timeSent = 0.0
timeRcvd = 0.0
timeRTT = 0.0
estRTT = 0.0  # Estimate RTT
devRTT = 0  # Deviation RTT
sumRTT = 0.0  # Total sum of RTT
numPongs = 0  # Number of returned pings
minRTT = 1000.0  # The minimum of RTT
maxRTT = 0.0  # The maximum of RTT

# value for Estimated RTT
a = 0.125
# value for Deviation RTT
b = 0.25

# Create 10 pings
for x in range(1, 11):
    try:
        # Create a client socket
        clientSocket = socket(AF_INET, SOCK_DGRAM)
        # sends message to server
        message = "Ping" + str(x)
        clientSocket.sendto(message.encode(), (serverName, serverPort))

        # record the time when the packet was sent
        # set the timeout time to 1 sec
        timeSent = time()
        clientSocket.settimeout(1)

        # receive message from the server
        modifiedMessage, serverAddress = clientSocket.recvfrom(2048)
        # records the time when message comes from the server
        timeRcvd = time()
        # calculate RTT in ms
        timeRTT = (timeRcvd - timeSent) * 1000

        # Sum up the RTT of returned message, and update min and max of RTT
        sumRTT = sumRTT + timeRTT
        if (minRTT > timeRTT):
            minRTT = timeRTT
        if (maxRTT < timeRTT):
            maxRTT = timeRTT
        numPongs = numPongs + 1

        # calculate estimate RTT and deviation RTT
        if (x == 1):
            estRTT = timeRTT
            devRTT = estRTT / 2
            print("Mesg sent: " + (message))
            print("Mesg rcvd: " + (modifiedMessage.decode()))
            print("Start Time: {:.11e}".format((timeSent)))
            print("Return Time {:.11e}".format((timeRcvd)))
            print("PONG {} RTT: {:.9} ms\n".format(x, timeRTT))
        else:
            estRTT = ((1 - a) * estRTT) + (a * timeRTT)
            devRTT = ((1 - b) * devRTT) + (b * abs(timeRTT - estRTT))
            print("Mesg sent: " + (message))
            print("Mesg rcvd: " + (modifiedMessage.decode()))
            print("Start time:", "%.11e" % Decimal(timeSent))
            print("Return time:", "%.11e" % Decimal(timeRcvd))
            print("PONG {} RTT: {:.9} ms\n".format(x, timeRTT))

        # close the socket
        clientSocket.close()

    # create timeout exception
    except timeout:
        print("Mesg sent: " + (message))
        print("No Mesg rcvd")
        print("PONG {} Request Timed out\n".format(x))
        clientSocket.close()

# Calculate the average RTT time
avgRTT = sumRTT / numPongs

# Calculate the percentage of the lost packets in the process
pocLoss = (10.0 - numPongs) * 100 / 10

# Get the timeout interval value within the process
timeout = estRTT + (4 * devRTT)

# Added to print the specified text to client output
print("Min RTT: \t{:.13} ms".format(minRTT))
print("Max RTT: \t{:.9} ms".format(maxRTT))
print("Average RTT: \t{:.13} ms".format(avgRTT))
print("Packet Loss: \t{} %".format(pocLoss))
print("Estimated RTT: \t{:.13} ms".format(estRTT))
print("Dev RTT:\t{:.13} ms".format(devRTT))
print("Timeout Interval:{:.11} ms".format(timeout))
