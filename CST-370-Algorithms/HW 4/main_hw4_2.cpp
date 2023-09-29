/*
 * INSTRUCTION:
 *     This is a C++ starting code for hw4_2.
 *     When you finish the development, download this file.
 *     Note that the current filename is "main.cpp".
 *     But rename it to "main_hw4_2.cpp".
 *     After that, upload the renamed file on Canvas.
 */

// Finish the head comment with Abstract, Name, and Date.
/*
 * Title: main_hw4_2.cpp
 * Abstract: Displays the biggest number in an array w/ n-integer numbers using the divide-and-   *           conquer technique
 * Name: Janet Pham
 * Date: 01/31/2023
 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//FUNCTION PROTOTYPES
vector<int> input();
int max(vector<int> v, int start, int end);

//definition for input function
vector<int> input(){
  vector<int> v;
  int size;

  cin >> size;
  //resize the vector to the size give by user
  v.resize(size);

  //get the values for the vector from user
  for(int x = 0; x < size; x++){
    cin >> v[x];
  }

  return v;
}

//defintion for finding max function
int max(vector<int> v, int start, int end){
  //if the start and end indices are the same, return the value at that index
  if(start == end)
    return v[start];

  //divide the vector into two parts and find the max value
  int max1 = max(v, start, (start + end) / 2);
  int max2 = max(v, (start + end) / 2 + 1, end);

  //compare the max values from each part and return the larger of the two
  if (max1 > max2)
    return max1;
  else
    return max2;
}
int main()
{
  //calls the input function to get user's input
  vector<int> num = input();

  //calls the max value function to find the maximum value in the input factor
  int maxValue = max(num, 0, num.size() - 1);

  //outputs the max value
  cout << maxValue << endl;

  return 0;
}

