/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 10, 2017, 2:43 PM
  Purpose:  Write a program that will predict how much the East Coast division
 will generate if the company has $8.6 million in sales this year given that
 it generates 58 percent of total sales.
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
    float percent, total_sales, East_Coast_Share;
    //Input values
    percent = 0.58; //generates 58 percent of total sales
    total_sales = 8.6; //total sales of $8.6 million
    //Process by mapping inputs to outputs
    East_Coast_Share = percent * total_sales; 
    //calculates how much will be generates from given percentage
    //Output values
    cout << "The East Coast division will generate $"
            << East_Coast_Share << " million if it generates "
            << (percent*100) << "% of total sales.\n";
    //Exit stage right!
    return 0;
}