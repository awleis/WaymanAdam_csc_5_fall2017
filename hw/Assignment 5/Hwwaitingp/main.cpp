/* 
 * File:   main.cpp
 * Author: Adam Wayman  
 * Created on Nov 13th, 2017, 11:23 AM
 * Purpose:  Time after waiting
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cstdlib> 
#include <cmath>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int cth,ctm;   // current time
    int wth,wtm; // waiting time
    int th,tm;//added together
    //Initialize Variables
    cout<<"Enter the current time (hours and minutes)"<<endl;
    cin>>cth>>ctm;
    cout<<"Enter the waiting time"<<endl;
    cin>>wth>>wtm;
    //Input Data/Variables
    th=cth+wth;
    tm=ctm+wtm;
    //calculate time
    if(tm>=60){
        th=th+1;
        tm=tm-60;
    }
    
    //Process or map the inputs to the outputs
    cout<<"The time after waiting is "<<th<<":"<<tm<<endl;
    //Display/Output all pertinent variables
    
    //Exit the program
    return 0;
}
