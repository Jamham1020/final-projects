/*
 * INSTRUCTION:
 *     This is a C++ starting code for hw4_1.
 *     When you finish the development, download this file.
 *     Note that the current filename is "main.cpp".
 *     But rename it to "main_hw4_1.cpp".
 *     After that, upload the renamed file on Canvas.
 */

// Finish the head comment with Abstract, Name, and Date.
/*
 * Title: main_hw4_1.cpp
 * Abstract: Program reads a number input value and the value themselves, and rearrange the 
 *           number in numerical order. Program should display the results of two approaches
 *           
 * Name: Janet Pham 
 * Date: 01/30/2023
 */

/*
*  First approach use two indexes i and j, where i points to the first number in the list and j
*  points to the last number on the list.  
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// FUNCTION PROTOTYPES
vector<int> input();
void print(vector<int> v);
void appr1(vector<int> &v);
void appr2(vector<int> &v);



int main() {
    //call input and store it numbers(num)
    //create two additional vectors 'a1' and 'a2' both with the same data as numbers
    vector<int> num = input();
    vector<int> a1 = num;
    vector<int> a2 = num;

    // call approaches(appr1) and 'print' on 'a1' and do the same for appr2 to 'a2'
    appr1(a1);
    print(a1);
    appr2(a2);
    print(a2);
    return 0;
}

/* 
  * function 'input' takes the size of the vector from user
  * creates empty vector 'arr' with a specified size, then        
  * fills 'arr' with values from the user
  * return arr
*/
vector<int> input() {
    int size;
    cin >> size;
    vector<int> arr;
    arr.resize(size);

    for (int x = 0; x < size; x++) {
        cin >> arr[x];
    }

    return arr;
}

/*
 * appr1 function takes vector 'v' by reference
 * partitions all positive numbers in front and negative numbers at the end
 * uses 2 pointers, front and end, and swaps the positive and negative numbers
 * swaps positve and negative numbers, moving the pointers inward until end is less than front
*/
void appr1(vector<int> &v) {
    int front = 0;           
    int end = v.size() - 1;  

    while (end > front) {
        //front is positive and end is negative swap values
        if (v[front] > 0 && v[end] < 0) { 
            swap(v[front], v[end]);
            front++;
            end--;
        //front and end are negative, move front pointer forward
        } else if (v[front] < 0 && v[end] < 0) {
            front++;
          //if front and end are positive, move end pointer backward
        } else {
            end--;
        }
    }
}


void appr2(vector<int> &v) {
  int marker = 0;  
  int scout = 0;   
  //loops until scout reaches end of the vector
  while (scout < v.size()) {
    //if the number at marker is not positive
      if ((!v[marker]) > 0) {
        //move marker one step
          marker++;
      }
    //if the number at scout is negative
      if (v[scout] < 0) {
          //swap the numbers at marker and scout
          swap(v[marker], v[scout]);
          //move the marker and scout one step
          marker++;
          scout++;
      } else {
          scout++;
      }
   }
}

//Prints out the vectors
void print(vector<int> v) {
  for (auto x:v) {
    cout << x << " ";
    
  }
  cout << "\n";
  return;
}
