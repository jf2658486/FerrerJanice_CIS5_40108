/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 16, 2017, 6:03 PM
  Purpose:  Write a program that asks for the weight of the package and the 
 * distance it is to be shipped, and then displays for the charges.
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
    int weight, distance;
    float charge_rate;
    //Ask for weight of package and distance for it to be shipped
    cout << "Enter the weight of package in kilograms: ";
    cin >> weight;
    cout << "Enter the distance for it to be shipped: ";
    cin >> distance;
    //Display charges
    if (weight<=2 && weight>0)
    {
        cout << "You are charged $1.10 per 500 miles for shipping.\n";
    }    
    else if (weight>2 && weight<=6)
    {
        cout << "You are charged $2.20 per 500 miles for shipping.\n";
    }
    else if (weight>6 && weight<=10)
    {
        cout << "You are charged $3.70 per 500 miles for shipping.\n";
    }
    else if (weight>10 && weight<=20)
    {
        cout << "You are charged $4.80 per 500 miles for shipping.\n";
    } 
    else
    {
        cout << "Invalid weight\n"; 
    } 
    //Set Minimum and Maximum distance
    if (distance<10 || distance>3000)
    {    
        cout << "Invalid shipping distance\n";
    }    
    //Exit stage right!
    return 0;
}