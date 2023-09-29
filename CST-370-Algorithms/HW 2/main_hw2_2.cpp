/*
 * INSTRUCTION:
 *     This is a C++ starting code for hw2_2.
 *     When you finish the development, download this file.
 *     Note that the current filename is "main.cpp".
 *     But rename it to "main_hw2_2.cpp".
 *     After that, upload the renamed file on Canvas.
 */

// Finish the head comment with Abstract, Name, and Date.
/*
 * Title: main_hw2_2.cpp
 * Abstract: Programs reads number of elements in a set and then read the elements of the set 
 *           and display the possible decimal numbers, corresponding binary numbers, and subsets 
 *           one by one
 * Name: Janet Pham 
 * Date:
 */

#include <iostream>
// #include <vector>
// #include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int size;
  cin >> size;
  string s[size];
  //taking the input of the set
  for(int i = size - 1; i >= 0; i--)
    cin >> s[i];

  //iterating through each possible subset
  for(int i = 0; i <(1 << size); i++){
    cout << i << ":";
    
    // generating binary representation of the current subset
    for(int j = size - 1; j >= 0; j--){
      cout << (i &(1 << j)? 1: 0);
    }
    if(size == 0)
      cout << "0";
    cout << ":";
    string ans = "";
    //generating the elements of the current subset
    for(int j = size - 1; j >= 0; j--){
      if(i &(1 << j))
        ans += s[j] + " ";
    }
    if(ans != ""){
      ans.pop_back();
      cout << ans << endl;
    }
    // if the current subset is empty, print "EMPTY"
    else {
      cout << "EMPTY" << endl;
    }
    if(i != ((1 << size) - 1)){
      
    }
      
  }
}