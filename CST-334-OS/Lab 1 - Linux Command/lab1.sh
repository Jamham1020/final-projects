#!/bin/bash
#Name: Janet Pham
#Course: CST-334-40_SU22
#Title: Lab 1 - Area of Rectangle and Circle
#Description: This program computes the area of both a rectangle and circle.
#Date: June 28, 2022

#Question1: I am using the provided CSUMB server, using PuTTY as the SSH to the server. On my computer, I am using Ubuntu and Oracle VM Virtual Box as the hypervisor.
#Question2: I did at first had problem with doing it on my virtual machine and learning how to use vi editor. Had to search through various documents and YouTube
#           videos to help me with it, but I think I am getting the hang of it. Some parts in the provided script wasn't working out so I changed a bit of it.

echo Executing $0
echo $(/bin/ls | wc -l) files
wc -l $(/bin/ls)
echo "HOME="$HOME
echo "USER="$USER
echo "PATH="$PATH
echo "PWD="$PWD
echo "\$\$"=$$
echo='whoami'
numusers=$(who | wc -l)
echo "Hi $USER! There are $numusers users logged on."
if [ $USER = "pham7435" ]
then
 echo "Now you can proceed!"
else
 echo "Check who logged in!"
 exit 1
fi

# Calculate the area of a rectangle
response="Yes"
while [ $response != "No" ]
do
 echo "Enter height of rectangle: "
 read height
 echo "Enter width of rectangle: "
 read width
 area=$(expr $height \* $width)
 echo "The area of the rectangle is $area"

 echo "Would you like to repeat for another rectangle [Yes/No]?"
 read response
done

# Calcalate the area of a circle
pi=3.14
response="Yes"
while [ $response != 'No' ]
do
 echo "Enter the radius of a circle: "
 read radius
 area=$(expr "$pi * ($radius * $radius)" | bc)
 echo "The area of the circle is $area"

 echo "Would you like to repeat for another circle [Yes/No]?"
 read response

done

