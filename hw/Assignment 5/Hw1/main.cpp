/* 
 * File:   main.cpp
 * Author: Adam Wayman  
 * Created on Nov 13th, 2017, 11:23 AM
 * Purpose:  Finding the average
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
 float average(float s1,float s2,float s3,float s4);
float standev(float s1,float s2,float s3,float s4);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float s1,s2,s3,s4;//Score inputs
    
    //Initialize Variables
    
    //Input Data/Variables
    cout<<"Enter Scores (1,2,3,4)"<<endl;
    cin>>s1>>s2>>s3>>s4;      
    //Process or map the inputs to the outputs
   
    //Display/Output all pertinent variables
    cout<<"The average is "<<average(s1,s2,s3,s4)<<endl;
    cout<<"The standard deviation is "<<standev(s1,s2,s3,s4)<<endl;
    //Exit the program
    return 0;
}
float average(float s1,float s2,float s3,float s4){
    float ave=(s1+s2+s3+s4)/4;
    return (ave); 
}
float standev(float s1,float s2,float s3,float s4){
    float ave=average(s1,s2,s3,s4);
    float variance=
    (pow(s1-ave,2)+
    pow(s2-ave,2)+
    pow(s3-ave,2)+        
    pow(s4-ave,2))/3;
    float stdd=pow(variance,.5);
    return stdd;
}