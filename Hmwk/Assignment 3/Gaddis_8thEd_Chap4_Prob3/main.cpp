/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 16, 2017, 3:41 PM
  Purpose: Write a program that asks the user to enter a date and the program 
 * should determine whether the date is magic if the month times the day equals
 * the year.  
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
    int month, day, year;
    //Process by mapping inputs to outputs
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the day ";
    cin >> day;
    cout << "Enter the year: ";
    cin >> year;
    //Output the date
    cout << "The date is " << month << "/" << day << "/" << year << ".\n";
    //Determine if month times day equals the year
    if (month * day == year)
    {
        cout << "The date is magic.\n";
    }
    else
    {    
        cout << "The date is not magic.\n";
    }    
    //Exit stage right!
    return 0;
}