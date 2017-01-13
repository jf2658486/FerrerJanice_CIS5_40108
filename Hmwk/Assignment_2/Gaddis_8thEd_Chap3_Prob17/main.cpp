/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 3, 2017, 12:15 PM
  Purpose:  Write a program that can be used as a math tutor for a young
 * student
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Constants
    const int MIN_VALUE = 1; 
    const int MAX_VALUE = 999;
    //Get the system time
    unsigned seed = time(0);
    //Seed the random number generator
    srand(seed);
    //Declare Variables
    int first_num, second_num, sum;
    //Store random numbers to add
    first_num = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    second_num = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    //Calculate sum of two numbers
    sum = first_num+second_num;
    //Display the two numbers to be added
    cout<<setw(4)<<first_num<<endl;
    cout<<"+"<<setw(3)<<second_num<<endl;
    cout<<"_____\n";
    //Pause program
    cin.get();
    //Output sum
    cout<<" "<<sum<<endl;
    //Exit stage right!
    return 0;
}