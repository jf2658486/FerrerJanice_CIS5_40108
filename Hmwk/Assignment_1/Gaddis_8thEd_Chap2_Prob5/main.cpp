/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 10, 2017, 4:00 PM
  Purpose:  Write a program to calculate the average of a series of given values
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
    float var1, var2, var3, var4, var5;
    float sum, avg;
    //Input values
    var1 = 28; var2 = 32; var3 = 37; var4 = 24; var5 = 33; //given 5 values
    //Process by mapping inputs to outputs
    sum = var1 + var2 + var3 + var4 + var5; //add up given values
    avg = sum / 5; //calculate average
    //Output values
    cout << "The average of the series of given values is "
         << avg << endl;
    //Exit stage right!
    return 0;
}