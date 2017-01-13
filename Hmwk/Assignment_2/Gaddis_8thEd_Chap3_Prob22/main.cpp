/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 12, 2017, 9:02 PM
  Purpose: Write a program that asks for an angle in radians and then display
 * sine, cosine, and tangent of the angle
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
    //Declare Variables
    float angle, y;
    //Process by mapping inputs to outputs
    cout<<"Enter the angle in radians: ";
    cin>>angle;
    //Input sin, cos, tan formulas and display values
    y = sin(angle);
    cout<<setprecision(4)<<fixed;
    cout<<"sin angle: "<<y<<endl;
    y = cos(angle);
    cout<<"cos angle: "<<y<<endl;
    y = tan(angle);
    cout<<"tan angle: "<<y<<endl;
    //Exit stage right!
    return 0;
}