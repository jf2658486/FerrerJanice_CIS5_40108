/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 12, 2017, 6:34 PM
  Purpose:  Write a program that converts Celsius temperatures to Fahrenheit 
 * temperatures.
 */

//System Libraries
#include <iostream>
#include <iomanip>
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
    float celsius_temp, fahr_temp;
    //Process by mapping inputs to outputs
    //Ask for temperature in Celsius
    cout<<"Enter temperature in Celsius: ";
    cin>>celsius_temp;
    //Use formula of conversion from Celsius to Fahrenheit
    fahr_temp = (9/5)*celsius_temp + 32;
    //Output Fahrenheit temperature
    cout<<"Temperature in Fahrenheit is: "<<fahr_temp<<endl;
    //Exit stage right!
    return 0;
}