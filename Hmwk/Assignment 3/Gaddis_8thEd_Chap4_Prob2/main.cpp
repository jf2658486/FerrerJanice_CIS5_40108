/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 16, 2017, 3:22 PM
  Purpose:  Write a program that asks the user to enter a number within the 
 * range of 1 through 10. Then use the switch statement to display the Roman
 * numeral of that number.
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
    int number;
    //Process by mapping inputs to outputs
    //Ask for a number with the range of 1 through 10
    cout << "Enter a number between 1 and 10: ";
    cin >> number;
    //Output values
    switch (number)
    {
        case 1: cout << "The Roman numeral is I.\n";
               break;
        case 2: cout << "The Roman numeral is II.\n";
               break; 
        case 3: cout << "The Roman numeral is III.\n";
               break; 
        case 4: cout << "The Roman numeral is IV.\n";
               break;
        case 5: cout << "The Roman numeral is V.\n";
               break;  
        case 6: cout << "The Roman numeral is VI.\n";
               break;
        case 7: cout << "The Roman numeral is VII.\n";
               break; 
        case 8: cout << "The Roman numeral is VIII.\n";
               break; 
        case 9: cout << "The Roman numeral is IX.\n";
               break;
        case 10: cout << "The Roman numeral is X.\n";
               break;
        default: cout << "You did not enter a number between 1 and 10! \n";      
    }        
    //Exit stage right!
    return 0;
}