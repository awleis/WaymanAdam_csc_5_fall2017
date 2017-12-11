/* 
 * File:   main.cpp
 * Author: Adam Wayman  
 * Created on Nov 13th, 2017, 11:23 AM
 * Purpose:  feet and inches
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cstdlib>      
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
float input();
float metcalc(float inch);
float centcalc(float metr);
void output(float inch,float metr,float cent);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float inch;
    float metr;
    float cent;
    //Initialize Variables
    
    //Input Data/Variables
    inch=input();
    metr=metcalc(inch);
    cent=centcalc(metr);
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    output(inch, metr,cent);
    //Exit the program
    return 0;
}
float input(){
    float feet,inch;
    cout<<"Enter length in feet"<<endl;
    cin>>feet;
    cout<<"Enter length in inches"<<endl;
    cin>>inch;
    inch=inch+(feet*12);
    return(inch);
   
}
float metcalc(float inch){
float metr;
metr=inch/39.37;
return metr;
}
float centcalc(float metr){
float cent;
cent=metr*100;
return cent;
}
void output(float inch,float metr,float cent){
    cout<<"Inches equals "<<inch<<endl;
    cout<<"meters equals "<<metr<<endl;
    cout<<"Centimeters equals "<<cent<<endl;
}