/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 10, 2017, 2:15 PM
  Purpose:  Write a program that produces the sum of two numbers or integers.
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
    //initialize integer variable first_num to be 50
    int first_num = 50; 
    //initialize integer variable second_num to be 100
    int second_num = 100;
    //define integer variable name total
    int total;
    //Process by mapping inputs to outputs
    total = first_num + second_num;
    //Output Values
    cout << "The sum of "
            << first_num << " and "
            << second_num << " is "
            << total << endl;
    return 0;
}