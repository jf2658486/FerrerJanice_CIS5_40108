/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 12, 2017, 9:13 PM
  Purpose:  Write a program that calculates a car's gas mileage.
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
    float gallons, miles, mpg;
    //Process by mapping inputs to outputs
    //Ask for number of gallons of gas can can hold
    cout<<"Enter the number of gallons car can hold: ";
    cin>>gallons;
    cout<<"Enter the number of miles car can drive on a full tank: ";
    cin>>miles;
    //Calculate miles per gallon
    mpg = miles/gallons;
    //Output values
    cout<<"The number of miles that may be driven per gallon of gas is "
        <<mpg<<endl;
    //Exit stage right!
    return 0;
}