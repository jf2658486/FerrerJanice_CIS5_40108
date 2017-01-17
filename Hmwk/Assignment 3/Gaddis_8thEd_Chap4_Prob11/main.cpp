/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 16, 2017, 6:51 PM
  Purpose:  
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
    int first_num, second_num, sum, student_sum;
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
    //Ask student to enter their answer
    cout<<"Enter your answer: ";
    cin>>student_sum;
    //Determine whether student's answer was correct
    if (student_sum == sum)
    {
        cout<<"Congratulations, you are correct!\n"; 
    } 
    else
    {
        cout<<"You are incorrect. The correct answer is "<<sum<<".\n";
    }    
    //Exit stage right!
    return 0;
}