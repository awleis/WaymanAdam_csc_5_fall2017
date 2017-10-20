/* 
 * File:   main.cpp
 * Author: Adam Wayman
 * Created on Oct 20th,2017
 * Purpose:  computes the value of the user's holding of one stock
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
float(portion)(int wdp,int frp1,int frp2){
    float sspr,num,den;
    num=frp1;
    den=frp2;
    sspr=wdp+(num/den);
    return(sspr);
}
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
       float shares,//shares of stock owned
            usrh,//output//user holding
               res,//share price
            whdpl;//whole dollar portion
              int frp1,frp2;//fraction portion
               bool choice=1;
       while(choice==1){
    //Initialize Variables
    cout<<"Enter the number of shares"<<endl;
    cin>>shares;
    cout<<"Enter the whole dollar portion"<<endl;
    cin>>whdpl;
    cout<<"Enter the fraction portion(numerator and then denominator"<<endl;
    cin>>frp1>>frp2;
    //Input Data/Variables
    res=portion(whdpl,frp1,frp2);
    usrh=portion(whdpl,frp1,frp2)*shares;
    cout<<"result is "<<res<<endl;
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"The value of the user holdings is "<<usrh<<endl;
    //Exit the program
    cout<<"Type 1 to calculate again or 0 to quit"<<endl;
    cin>>choice;
       }
    return 0;
}
