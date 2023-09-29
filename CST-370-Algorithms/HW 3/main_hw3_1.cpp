/*
 * INSTRUCTION:
 *     This is a C++ starting code for hw3_1.
 *     When you finish the development, download this file.
 *     Note that the current filename is "main.cpp".
 *     But rename it to "main_hw3_1.cpp".
 *     After that, upload the renamed file on Canvas.
 */

// Finish the head comment with Abstract, Name, and Date.
/*
 * Title: main_hw3_1.cpp
 * Abstract: Program reads the number of input values from a user, then read the input values          *           from the use. It will then display the values in ascending order. If there short        
 *           representation of consecutive numbers than put them in a range. (no duplicates)
 * Name: Janet Pham
 * Date: 01/18/2023
 */

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
  int num;
  cin >> num;
  int arr[num];

  //read input values from user
  for(int i = 0; i < num; i++){
    cin >> arr[i];
  }

  //sort the array in ascending order
  sort(arr, arr + num);

  //initialize variables to keep track of consecutive numbers
  int start = arr[0];
  int end = arr[0];

  //iterate through the array and check for consecutive numbers
  for(int i = 1; i < num; i++){
    if(arr[i] == end + 1){
      end = arr[i];
    }
    else {
      if (start == end){
        cout << start << " ";
      } else {
        cout << start << "-" << end << " ";
      }
      start = arr[i];
      end = arr[i];
    }
  }
  if(start == end){
    cout << start << endl;
  } else {
    cout << start << "-" << end << endl;
  }
  return 0;
}