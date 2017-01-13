/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 12, 2017, 8:09 PM
  Purpose:  Modify the program from Problem 20 so that it reports the number of 
 * pizzas needed to buy for a party if each party attendant eats an average of
 * four slices.
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
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
    const float PI = 3.14159;
    const float area_slice = 14.125;
    float diameter, area, radius, num_of_slices;
    int num_of_people, num_pizzas;
    //Process by mapping inputs to outputs
    //Ask diameter of pizza
    cout<<"What is the diameter of the pizza in inches? ";
    cin>>diameter;
    //Ask number of people
    cout<<"How many people are attending the party? ";
    cin>>num_of_people;
    //Calculate radius and store it
    radius = diameter/2;
    //Calculate area
    area = PI * pow(radius, 2);
    //Calculate number of slices and pizzas
    num_of_slices = area/area_slice;
    int total = num_of_people * 4;
    num_pizzas = total/num_of_slices;
    //Output value
    cout<<"Number of Pizzas: "<<num_pizzas<<endl;
    //Exit stage right!
    return 0;
}