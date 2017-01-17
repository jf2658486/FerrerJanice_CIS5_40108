/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 16, 2017, 5:00 PM
  Purpose:  Write a program that asks the user to enter an object's mass, and 
 * then calculates and displays the weight. The program should also determine
 * whether the object is too light or too heavy.
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
    float weight, mass;
    //Ask for mass
    cout << "Enter the object's mass: ";
    cin >> mass;
    //Find and display weight
    weight = mass * 9.8;
    cout << "The object weighs " << weight << " newtons.\n";
    //Determine whether object is too light or too heavy
    if (weight > 1000)
    {    
        cout << "The object is too heavy.\n";
    }
    else if (weight < 10)
    {    
        cout << "The object is too light.\n"; 
    }    
    //Exit stage right!
    return 0;
}