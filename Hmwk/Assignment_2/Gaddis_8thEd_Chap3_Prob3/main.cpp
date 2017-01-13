/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 12, 2017, 3:00 PM
  Purpose: Write a program that asks for five test scores, calculate the average
 * test score and display it.
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
    //Declare Variables for each test score and average test score
    float test1, test2, test3, test4, test5;
    float avg_test_score;
    //Process by mapping inputs to outputs
    //Ask for five test scores
    cout<<"Enter score for test 1: ";
    cin>>test1;
    cout<<"Enter score for test 2: ";
    cin>>test2;
    cout<<"Enter score for test 3: ";
    cin>>test3;
    cout<<"Enter score for test 4: ";
    cin>>test4;
    cout<<"Enter score for test 5: ";
    cin>>test5;
    //Calculate average test score
    avg_test_score = (test1+test2+test3+test4+test5)/5;
    //Output average test score
    cout<<"Average test score among five tests is: "
        <<setprecision(1)<<fixed<<avg_test_score<<endl;   
    //Exit stage right!
    return 0;
}