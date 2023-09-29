/*
 * INSTRUCTION:
 *     This is a C++ starting code for hw2_1.
 *     When you finish the development, download this file.
 *     Note that the current filename is "main.cpp".
 *     But rename it to "main_hw2_1.cpp".
 *     After that, upload the renamed file on Canvas.
 */

// Finish the head comment with Abstract, Name, and Date.
/*
 * Title: main_hw2_1.cpp
 * Abstract: Program that reads two timestamps of two events from a user and
 *           displays the difference between the two time stamp. Timestamp is composed of
 *           hour, minutes, and seconds. 
 * Name: Janet Pham 
 * Date: 1/12/2023
 */

#include <iostream>
//#include <vector>
#include <bits/stdc++.h>
using namespace std;

// define a structure ,Timestamp, to hold the hour, minutes, and seconds for a given time
struct Timestamp {
	int hour;
	int minutes;
	int seconds;
};

//function string_time take string and convert it into a Timestamp struct
struct Timestamp string_time(string stime){
  int temp = 0, flag = 0;
  struct Timestamp time;
  for(int i = 0; i < stime.size(); i++){
    if(stime[i] == ':'){
      //hour
      if(flag == 0){
        time.hour = temp;
        temp = 0;
        flag++;
      }
      //minute
      else if(flag == 1){
        time.minutes = temp;
        temp = 0;
      }
    }
    else {
      temp = temp * 10 + (stime[i] - '0');
    }
  }
  //seconds
  time.seconds = temp;
  return time;
}

int main() {
	
	string event1, event2;
  cin >> event1 >> event2;
  //two strings, event1 and event2, are passed into the time_string function and returns two             Timestamp structs
  struct Timestamp start = string_time(event1);
  struct Timestamp end = string_time(event2);
  
  struct Timestamp diff;
  //calculate differences of the second event to the first event
  if(start.seconds > end.seconds){
    end.seconds += 60;
    end.minutes--;
  }
  diff.seconds = end.seconds - start.seconds;
  if(start.minutes > end.minutes){
    end.minutes += 60;
    end.hour--;
  }
	diff.minutes = end.minutes - start.minutes;
  if(start.hour > end.hour){
    end.hour += 24;
  }
  diff.hour = end.hour - start.hour;

  //print the difference in the format "HH:MM:SS"
  if(diff.hour < 10)
    cout << "0" << diff.hour << ":";
  else
    cout << diff.hour << ":";
  if(diff.minutes < 10)
    cout << "0" << diff.minutes << ":";
  else
    cout << diff.minutes << ":";
  if(diff.seconds < 10)
    cout << "0" << diff.seconds << endl;
  else
    cout << diff.seconds << endl;
  return 0;
}
