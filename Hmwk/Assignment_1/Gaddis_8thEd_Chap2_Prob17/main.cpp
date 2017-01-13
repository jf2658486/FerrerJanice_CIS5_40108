/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 10, 2017, 7:30 PM
  Purpose: Write a program that displays stock commission.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another
const unsigned char PERCENT = 100;
//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables and Input Values
    unsigned char stock_price = 35; //units of $'s/share
    unsigned short nShares = 750; //Number of Shares
    unsigned char commisn = 2; //Percent Commission
    unsigned short stock_paid, com_paid, tot_paid;
    stock_paid = stock_price * nShares;
    //Process by mapping inputs to outputs
    //Amount paid for the stock purchase $'s
    com_paid = stock_paid * commisn/PERCENT;
    //commission on stock purchase $'s
    tot_paid = stock_paid + com_paid;
    //Total Paid $'s
    //Output Values
    cout<<"Number of Shares = "<<nShares<<" shares"<<endl;
    cout<<"Stock Price Paid = $"<<stock_paid<<endl;
    cout<<"Commission Paid = $"<<com_paid<<endl;
    cout<<"Total Paid = $"<<tot_paid<<endl;
    //Exit stage right!
    return 0;
}