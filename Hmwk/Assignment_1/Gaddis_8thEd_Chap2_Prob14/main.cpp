/* 
  File:   main.cpp
  Author: Janice Ferrer
  Created on January 10, 2017, 7:23 PM
  Purpose:  Write a program that displays pieces of personal information, each
  on a separate line. 
 */

//System Libraries
#include <iostream>
#include <string>
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
    string name;
    string address, city, state, ZIP_code;
    string phone_number, coll_maj;
    //Input values
    name = "Janice Ferrer";
    address = "2941 E Quinnell Dr";
    city = "West Covina";
    state = "CA";
    ZIP_code = "91792";
    phone_number = "909 598 9624";
    coll_maj = "Applied Math"; //college major       
    //Output values
    cout<<name<<"\n"<<address<<" "<<city<<","<<state<<" "<<ZIP_code<<"\n"
        <<phone_number<<"\n"<<coll_maj<<endl;    
    //Exit stage right!
    return 0;
}