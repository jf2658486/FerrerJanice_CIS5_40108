/* 
  File:   main.cpp
  Author: Dr. Mark E. Lehr
  Created on January 16, 2017, 4:40 PM
  Purpose: Write a program that calculates and displays a person's body mass
 * index (BMI). The program should also indicate whether a person has optimal 
 * weight, is underweight, or is overweight. 
 */

//System Libraries
#include <iostream>
#include <cmath> //needed for pow function
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
    float weight, height, BMI;
    //Ask for person's weight and height
    cout << "Enter your weight and height: ";
    cin >> weight >> height;
    //Output person's weight and height in pounds and inches
    cout << "You weigh " << weight << " pounds and are " << height
         << " inches high.\n";   
    //Find person's BMI
    BMI = weight * 703.0 / pow(height, 2.0);
    //Output BMI
    cout << "Your BMI is "<< BMI << ".\n";
    //Determine whether person has optimal weight, is underweight, or is 
    //overweight
    if (BMI < 18.5)
    {
        cout << "You are considered underweight.\n";
    }
    else if (BMI > 18.5 && BMI < 25.0)
    {
        cout << "You have optimal weight.\n";
    }
    else 
    {
        cout << "You are considered overweight.\n";
    }    
    //Exit stage right!
    return 0;
}