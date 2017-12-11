/* 
 * File:   main.cpp
 * Author: Adam Wayman  
 * Created on Nov 13th, 2017, 11:23 AM
 * Purpose:  weight
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cstdlib>      
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
float input();
float kilocalc(float ounces);
float Gramcalc(float kilo);
void output(float ounce,float kilo,float gram);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float ounce;
    float kilo;
    float gram;
    //Initialize Variables
    
    //Input Data/Variables
    ounce=input();
    kilo=kilocalc(ounce);
    gram=Gramcalc(kilo);
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    output(ounce,kilo,gram);
    //Exit the program
    return 0;
}
float input(){
    float pound,ounce;
    cout<<"Enter weight in pounds"<<endl;
    cin>>pound;
    cout<<"Enter weight in ounces"<<endl;
    cin>>ounce;
    ounce=ounce+(pound*16);
    return(ounce);
   
}
float kilocalc(float ounce){
float kilo;
kilo=(ounce/16)/(2.2046);
return kilo;
}
float Gramcalc(float kilo){
float gram;
gram=kilo*1000;
return gram;
}
void output(float ounce,float kilo,float gram){
cout<<"ounces = "<<ounce<<endl;
cout<<"Kilograms = "<<kilo<<endl;    
cout<<"Grams = "<<gram<<endl; 
}