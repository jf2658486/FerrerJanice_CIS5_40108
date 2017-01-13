/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 10, 2017, 3:51 PM
  Purpose:  Write a program that computes the tax and tip on a restaurant bill
 for a patron with a $88.67 meal charge.
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
    float meal_cost, tax, tip, meal_Cost_After_tax, totalBill;
    float tax_amt, tip_amt;
    //Input values
    meal_cost = 88.67; //meal charge $
    tax = 0.0675; //tax is %6.75 of meal charge $
    tip = 0.2; //tip is %20 of meal charge $ with added tax
    //Process by mapping inputs to outputs
    tax_amt = tax * meal_cost; //calculate tax amount
    //calculate meal cost with added tax amount
    meal_Cost_After_tax = meal_cost + tax_amt; 
    tip_amt = tip * meal_Cost_After_tax; //calculate tip amount
    //add meal charge, tax amount, tip amount for total bill
    totalBill = meal_cost + tax_amt + tip_amt; 
    //Output values
    cout << "The meal cost is $"
         << meal_Cost_After_tax << endl;
    cout << "The tax amount is $"
            << tax_amt << endl;
    cout << "The tip amount is $"
         << tip_amt << endl;
    cout << "The total bill is $"
         << totalBill << endl;   
    //Exit stage right!
    return 0;
}