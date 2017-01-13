/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 12, 2017, 3:45 PM
  Purpose:  Write a program to calculate the sales tax report that lists the 
 * sales for the month and the amount of sales tax collected
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables and Input Values
    char month[10];
    const float state_tax = 0.04; //state sales tax is 4%
    const float county_tax = 0.02; //county sales tax is 2%
    const float total_tax = 0.06; // total sales tax is 6%
    float total_income, tax_sumTotal, prod_sales, tax_sumCounty, tax_sumState;
    //Process by mapping inputs to outputs
    //Ask for month and year, total income
    cout<<setprecision(2)<<fixed;
    cout<<"Enter month: "<<endl;
    cin>> month;
    cout<<"Enter total income: "<<endl;
    cin>>total_income;
    //store total_income value in sales formula
    prod_sales = total_income/1.06;
    //Calculate county sales tax sum, state sales tax sum, and the total sales
    //tax sum
    tax_sumCounty = county_tax * prod_sales;
    tax_sumState = state_tax * prod_sales;
    tax_sumTotal = total_tax * prod_sales;
    //Output values
    cout<<left<<setw(7)<<"Month: "<<setw(13)<<month<<endl;
    cout<<"--------------------"<<endl;
    cout<<left<<setw(20)<<"Total Collected: ";
    cout<<"$"<<right<<setw(9)<<total_income<<endl;
    cout<<left<<setw(20)<<"Sales: ";
    cout<<"$"<<right<<setw(9)<<prod_sales<<endl;
    cout<<left<<setw(20)<<"County Sales Tax: ";
    cout<<"$"<<right<<setw(9)<<tax_sumCounty<<endl;
    cout<<left<<setw(20)<<"State Sales Tax: ";
    cout<<"$"<<right<<setw(9)<<tax_sumState<<endl;
    cout<<left<<setw(20)<<"Total Sales Tax: ";
    cout<<"$"<<right<<setw(9)<<tax_sumTotal<<endl;
    //Exit stage right!
    return 0;
}