/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 12, 2017, 2:43 PM
  Purpose:  Write a program that asks how many tickets for each class of seats
 * were sold, then displays the amount of income generated from ticket sales.
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
    //Declare Variables for the cost and number of tickets
    float classA_cost, classB_cost, classC_cost;
    float tickets_A, tickets_B, tickets_C;
    float sales_income;
    //Input values for cost of tickets
    classA_cost = 15.00; //ticket cost for Class A
    classB_cost = 12.00; //ticket cost for Class B
    classC_cost = 9.00;  //ticket cost for Class C      
    //Process by mapping inputs to outputs
    //Asking how many tickets for each class sold
    cout<<"Enter the number of tickets for Class A seats sold: ";
    cin>>tickets_A;
    cout<<"Enter the number of tickets for Class B seats sold: ";
    cin>>tickets_B;
    cout<<"Enter the number of tickets for Class C seats sold: ";
    cin>>tickets_C;
    //Calculating total ticket sales income
    sales_income = (classA_cost*tickets_A) + (classB_cost*tickets_B) + 
    (classC_cost*tickets_C); 
    //Output total ticket sales income
    cout<<"Total amount of income on ticket sales: $"<<setprecision(2)<<fixed
        <<showpoint<<sales_income<<endl;
    //Exit stage right!
    return 0;
}