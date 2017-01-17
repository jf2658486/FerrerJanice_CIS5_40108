/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 16, 2017, 2:55 PM
  Purpose:  Write a program that asks a user to enter two numbers and should use
 * the conditional operator to determine which number is the smaller and which 
 * is the larger.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int num1, num2; //To hold two numbers
    //Process by mapping inputs to outputs
    //Get the first number
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    //Output values
    //Determine which is number is smaller and larger
    if (num1 > num2)
    {    
        cout << "The first number " << num1 << " is larger.\n";
        cout << "So the second number " << num2 << " is smaller.\n"; 
    }
    else
    {
        cout << "The second number " << num2 << " is larger.\n";
        cout << "So the first number " << num1 << " is smaller.\n"; 
    }    
    //Exit stage right!
    return 0;
}