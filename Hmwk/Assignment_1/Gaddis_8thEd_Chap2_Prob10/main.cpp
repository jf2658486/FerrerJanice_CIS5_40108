/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 10, 2017, 6:42 PM
  Purpose: Write a program that calculates the number of miles per gallon the 
 car gets.
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
    int gall_of_gas, miles, MPG;
    //Input values
    gall_of_gas = 15; //n gallons of gasoline
    miles = 375; //miles driven before refueling
    //Process by mapping inputs to outputs
    MPG = miles / gall_of_gas; //calculate miles per gallon
    //Output values
    cout << "The number of miles per gallon the car gets is "
         << MPG << endl;   
    //Exit stage right!
    return 0;
}