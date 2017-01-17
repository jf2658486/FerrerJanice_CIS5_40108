/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 16, 2017, 8:11 PM
  Purpose:  Write a program that acts as a geometry calculator to calculate the
 * area of a circle, triangle, and a rectangle.
 */

//System Libraries
#include <iostream>
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
    float circle_area, radius;
    float PI = 3.14159;
    float rect_area, length, width;
    float trian_area, base, height;
    int choice;
    //Display menu for Geometry Calculator
    cout<<"Geometry Calculator\n";
    cout<<"    1. Calculate the Area of a Circle\n";
    cout<<"    2. Calculate the Area of a Rectangle\n";
    cout<<"    3. Calculate the Area of a Triangle\n";
    cout<<"    4. Quit\n";
    cout<<"    Enter your choice (1-4):\n";
    cin>>choice;
    //Display cases for each choice
    switch (choice) 
    {   
        case 1: //Ask for radius of circle and display area
            cout<<"Enter radius of circle: ";
            cin>>radius;
            if (radius>0)
            {
                circle_area = PI*pow(radius, 2);
                cout<<"The area of the circle is "<<circle_area<<endl;
            }
            else
            {
                cout<<"Invalid input!\n";
            } 
        case 2: //Ask for length and width of rectangle and display area
            cout<<"Enter length and width of rectangle";
            cin>>length>>width;
            if (length>0 && width>0)
            {
                rect_area = length*width;
                cout<<"The area of the rectangle is "<<rect_area<<endl;
            } 
            else
            {
                cout<<"Invalid input!\n";
            } 
        case 3: //Ask for triangle's base and height and display area
            cout<<"Enter the length of triangle's base and height: ";
            cin>>base>>height;
            if (base>0 && height>0)
            {
                trian_area = base*height*0.5;
                cout<<"The area of the triangle of is "<<trian_area<<endl;
            }  
            else
            {
                cout<<"Invalid input!\n";
            }
        case 4: exit(0);   //end switch
        default: cout<<"Error: Invalid choice!\n"; 
    }     
    //Exit stage right!
    return 0;
}