/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 12, 2017, 8:09 PM
  Purpose:  Write a program for Joe's Pizza Palace to calculate the number of 
 * slices a pizza of any size can be divided into.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables and Input Values
    const float PI = 3.14159;
    const float area_slice = 14.125;
    float diameter, area, radius, num_of_slices;
    //Process by mapping inputs to outputs
    cout<<"What is the diameter of the pizza in inches? ";
    cin>>diameter;
    //Calculate radius and store it
    radius = diameter/2;
    //Calculate area
    area = PI * pow(radius, 2);
    //Calculate number of slices
    num_of_slices = area/area_slice;
    //Output value
    cout<<fixed<<showpoint<<setprecision(1);
    cout<<"The pizza should be divided into "<<num_of_slices<<" slices.\n";
    //Exit stage right!
    return 0;
}