/*
 * INSTRUCTION:
 *     This is a C++ starting code for hw0_1.
 *     When you finish the development, download this file.
 *     Note that the current filename is "main.cpp".
 *     But rename it to "main_hw0_1.cpp". Please DO NOT change
 *     the name of the main procecure "main()"
 *     After that, upload the renamed file on Canvas.
 */

// Finish the head comment with Abstract, Name, and Date.
/*
 * Title: hw0_1 (C++)
 * Abstract: Write a program that reads two integer numbers from a user
 *           and displays the sum and difference of the two numbers.
 * Name: Janet Pham
 * Date: 12/17/2022
 */

#include <iostream>
using namespace std;

int main()
{
    // Your code should be here.
    // The following is a just sample statement.
    //initiate two integers
    int a,b;
    cout << "Please enter two integers: " << endl;
    cin >>  a >> b;
    // cout << "The numbers are: " << a << " " << b << endl;
    cout << "SUM: " << (a + b) << endl;
    cout << "DIFF: " << (a - b) << endl;
    
    return 0;
}
