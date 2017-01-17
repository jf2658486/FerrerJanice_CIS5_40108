/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 16, 2017, 5:27 PM
  Purpose:  Create a change-counting game that gets the use to enter the 
 * number of coins required to make exactly one dollar.
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
    int penny, nickel, dime, quarter;
    float totalP, totalN, totalD, totalQ;
    float totalValue;
    //Ask for number of pennies, nickels, dimes, and quarters
    cout << "Game: Enter the number of coins required to make one dollar.\n";
    cout << "Enter number of pennies: ";
    cin >> penny;
    cout << "Enter number of nickels: ";
    cin >> nickel;
    cout << "Enter number of dimes: ";
    cin >> dime;
    cout << "Enter number of quarters: ";
    cin >> quarter;
    //Find total value of pennies, nickels, dimes, and quarters
    totalP = penny * 0.01;
    totalN = nickel * 0.05;
    totalD = dime * 0.1;
    totalQ = quarter * 0.25;
    //Find total value of coins
    totalValue = totalP + totalN + totalD + totalQ; 
    //Display total value
    cout << "Your total value is $" << totalValue << ".\n";
    //Congratulate if total value amounts to a dollar
    if (totalValue == 1.00)
    {    
        cout << "Congratulations, you won the game!\n";
    }
    else if (totalValue < 1.00)
    {
        cout << "Amount given is less than a dollar.\n";
    }  
    else 
    {
        cout << "Amount given is more than a dollar.\n";
    }    
    //Exit stage right!
    return 0;
}