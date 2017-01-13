/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 10, 2017, 4:17 PM
  Purpose:  Write a program that holds the prices of the five items in five
 variables and calculates total purchase with given sales tax.
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
    float price1, price2, price3, price4, price5;
    float SubTotal, SalesTax_amt, TotalPrice;
    //Input values
    price1 = 15.95; price2 = 24.95; price3 = 6.95;
    price4 = 12.95; price5 = 3.95;
    //Process by mapping inputs to outputs
    //Calculate subtotal by adding up given prices
    SubTotal = price1 + price2 + price3 + price4 + price5;
    //Calculate sales tax amount with given sales tax is 7%
    SalesTax_amt = SubTotal * 0.07;
    //Add up subtotal with sales tax amount for total price
    TotalPrice = SubTotal + SalesTax_amt;
    //Output values
    cout<<"The prices of the 5 items are:\n";
    cout<<"$"<<price1<<endl;
    cout<<"$"<<price2<<endl;
    cout<<"$"<<price3<<endl;
    cout<<"$"<<price4<<endl;
    cout<<"$"<<price5<<endl;
    cout<<"The subtotal is $"<<SubTotal<<endl;
    cout<<"The amount of sales tax is $"<<SalesTax_amt<<endl;
    cout<<"The total is $"<<TotalPrice<<endl;
    //Exit stage right!
    return 0;
}