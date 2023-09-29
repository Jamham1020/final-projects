/*
 * INSTRUCTION:
 *     This is a C++ starting code for hw1_2.
 *     When you finish the development, download this file.
 *     Note that the current filename is "main.cpp".
 *     But rename it to "main_hw1_2.cpp". Please DO NOT change
 *     the name of the main procecure "main()"
 *     After that, upload the renamed file on Canvas.
 */

// Finish the head comment with Abstract, Name, and Date.
/*
 * Title: main_hw1_2.cpp
 * Abstract: Program checks whether an input string is a palindrome(reads the same front and  *           back) or not. Ignore case in the alphanumeric input string and symbols such as
 *           !, @, #, etc.
 * Name: Janet Pham
 * Date: 01/02/2023
 */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  //initiate variables
	string str;
  // cout << "\nPlease enter a string: ";
  getline(cin, str);
  // ignore alphanumeric input string
  str.erase(remove_if(str.begin(), str.end(), [](char c) {
    return !isalnum(c);
  }
    ), str.end());
  //convert string to lowercase
  transform(str.begin(), str.end(), str.begin(), ::tolower);

  //check if the string is a palindrome or not
  string palindrome = str;
  reverse(palindrome.begin(), palindrome.end());
  if(str == palindrome){
    cout<< "TRUE" << endl;
  }
  else {
    cout << "FALSE" << endl;
  }
  

	return 0;
}
