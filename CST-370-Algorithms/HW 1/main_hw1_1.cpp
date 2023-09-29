/*
 * INSTRUCTION:
 *     This is a C++ starting code for hw1_1.
 *     When you finish the development, download this file.
 *     Note that the current filename is "main.cpp".
 *     But rename it to "main_hw1_1.cpp". Please DO NOT change
 *     the name of the main procecure "main()"
 *     After that, upload the renamed file on Canvas.
 */

// Finish the head comment with Abstract, Name, and Date.
/*
 * Title: main_hw1_1.cpp
 * Abstract: Reads input numbers from a user and displays(ascending order) the closest        *           distance between two numbers among all input numbers. Sequence of two numbers   
 *           for the pair is important. Assume number of input values is less than 500.
 * Name: Janet Pham
 * Date: 12/27/2022
 */

#include <iostream>
#include <bits/stdc++.h>
using namespace std;



// function for sorting the numbers
void sortNum(int arr[], int a){
  for(int i = 0; i < a - 1; i++){
    for(int j = i + 1; j < a; j++){
      if(arr[i] > arr[j]){
        int k = arr[i];
        arr[i] = arr[j];
        arr[j] = k;
      }
    }
  }
}

//function to display pairs of minimum distance
void displayPairs(int arr[], int a, int minDistance){
  //sort the numbers
  sortNum(arr, a);
  for(int i = 0; i < a - 1; i++){
    for(int j = i + 1; j < a; j++){
      int d = abs(arr[i] - arr[j]);
      if(d == minDistance){
        //make sure sequence of pair numbers are taken into account (smallest first)
        if(arr[i] > arr[j])
          cout << "Pair:" << arr[j] << " " << arr[i] <<endl;
        else
          cout << "Pair:" << arr[i] << " " << arr[j] <<endl;
      }
    }
  }
}

//display minimum distance
int minDistance(int arr[], int a){
  int min = abs(arr[0] - arr[1]);
  for(int i =0; i < a; i++){
    for(int j = i + 1; j < a; j++){
      int d = abs(arr[i] - arr[j]);
      if(d < min)
      min = d;
    }
  }
  return min;
}
int main()
{
  // assume: number of input values is less than 500
  int a, arr[500];
  // read number of input
  cin >> a;
  for(int i = 0; i < a; i++){
    cin >> arr[i];
  }
  //minimum distance
  int minDistances = minDistance(arr, a);
  //display minimum distance
  cout << "Min Distance:" << minDistances << endl;
  //display pairs
  displayPairs(arr, a, minDistances);

  return 0;
}
