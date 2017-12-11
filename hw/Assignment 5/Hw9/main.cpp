/* 
 * File:   main.cpp
 * Author: Adam Wayman  
 * Created on Nov 13th, 2017, 11:23 AM
 * Purpose:  area of an arbitrary triangle
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cstdlib> 
#include <cmath>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
float calc(float a,float b,float c);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float a,b,c;//sides of triangle
    //Initialize Variables
    cout<<"Enter the values for the sides of the triangles"<<endl;
    cin>>a>>b>>c;
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"The perimeter is "<<a+b+c<<endl;
    cout<<"The area is "<<calc(a,b,c)<<endl;
    //Exit the program
    return 0;
}
float calc(float a,float b,float c){
    float s;
    float squr;
    float area;
    s=(a+b+c)/2;
    squr=s*(s-a)*(s-b)*(s-c);
    area=pow(squr,.5);       
    return area;
}