/* 
 * File:   main.cpp
 * Author: Adam Wayman
 * Created on Oct 20th,2017
 * savitch_8
 * Purpose:  overloading functions
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
float absolute(float a){
    
    return abs(a);
    }
int absolute(int a){
    return abs(a);
}
long absolute(long a){
   
    return abs(a);
}
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float n1;
    int n2;
    long n3;
    //Initialize Variables
    n1=5;
    n2=-6;
    n3=-34;
   //Display/Output all pertinent variables
     cout<<absolute(n1)<<endl;
     cout<<absolute(n2)<<endl;
     cout<<absolute(n3)<<endl;
    //Exit the program
    
       
    return 0;
}
