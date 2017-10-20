/* 
 * File:   main.cpp
 * Author: Adam Wayman
 * Created on Oct 20th,2017
 * Purpose:  Read in the Number of liters of gas consumed
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
float const LTPG=0.264179;//Liters per gallon
//Function Prototypes
float(MilepG)(float liter,float mile){
    float mpg,gal;
    gal=liter/LTPG;
    mpg=mile/gal;
    
    return(mpg);
}
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
       float literc,//Liters of gas consumed by users car
            mpg,//output
            miltr;//number of miles traveled by the car
               bool choice=1;
       while(choice==1){
    //Initialize Variables
    cout<<"Enter the number of liters that is consumed by the car"<<endl;
    cin>>literc;
    cout<<"Enter the number of miles traveled in the car"<<endl;
    cin>>miltr;
    //Input Data/Variables
    mpg=MilepG(literc,miltr);
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"The number of miles per gallon the car delivered is "<<mpg<<endl;
    //Exit the program
    cout<<"Type 1 to continue or 0 to quit"<<endl;
    cin>>choice;
       }
    return 0;
}
