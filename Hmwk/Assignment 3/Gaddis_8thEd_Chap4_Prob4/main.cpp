/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 16, 2017, 4:21 PM
  Purpose:  Write a program that asks for the length and width of two 
 * rectangles. The program should tell the user which rectangle has the greater
 * area, or if the areas are the same.
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
    int length1, length2, width1, width2;
    int area1, area2;
    //Ask for the lengths and widths
    cout << "Enter length and width of first rectangle: ";
    cin >> length1 >> width1;
    cout << "Enter length and width of second rectangle: ";
    cin >> length2 >> width2;
    //Find the two rectangle areas
    area1 = length1 * width1;
    area2 = length2 * width2;
    //Output the areas
    cout << "The area of the first rectangle is "<< area1 << ".\n";
    cout << "The area of the second rectangle is "<< area2 << ".\n";
    //Determine which rectangle has the greater area or if the areas are equal
    if (area1 > area2)
    {    
        cout << "Rectangle 1 has the greater area.\n";
    }    
    else if (area1 == area2)
    {
        cout << "Both rectangles have the same area. \n";
    }
    else 
    {
        cout << "Rectangle 2 has the greater area.\n";
    }    
    //Exit stage right!
    return 0;
}