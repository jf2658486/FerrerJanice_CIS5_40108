/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 12, 2017, 3:17 PM
  Purpose:  Write a program that asks for the number of males and females 
 * registered in a class and should display the percentage of males and females
 * in the class.
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
    //Declare Variables
    float males, females, num_of_students;
    float perc_males, perc_females;
    //Process by mapping inputs to outputs
    //Ask for number of males and females registered in class
    cout<<"Enter number of males registered: ";
    cin>>males;
    cout<<"Enter number of females registered: ";
    cin>>females;
    //Calculating number of students 
    num_of_students = males + females;
    //Calculating percentage of males and females in the class
    perc_males = (males / num_of_students)*100;
    perc_females = (females / num_of_students)*100;
    //Output percentage of males and females in the class
    cout<<"Percentage of males in the class: %"<<perc_males<<endl;
    cout<<"Percentage of females in the class: %"<<perc_females<<endl;
    //Exit stage right!
    return 0;
}