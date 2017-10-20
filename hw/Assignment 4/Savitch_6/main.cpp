/* 
 * File:   main.cpp
 * Author: Adam
 *
 * Purpose:  Savitch vending machine
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const char  DOLLAR =100;      //Dollar contains 100 pennies
const char  QUARTER= 25;      //Quarter contains 25 pennies
const char  DIME   = 10;      //Dime contains 10 pennies
const char  NICKEL =  5;      //Nickel contains 5 pennies
const float HLFPNY =0.005f;   //Half penny round up
const char  CNVPNY =100;      //Conversion to a penny

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float price,tndrd;
    unsigned short change;
    unsigned char nDlrs,nQtrs,nDimes,nNckls;
    
    //Initialize Variables
    
    //Input Data/Variables
    do{
        cout<<"The Vending Machine Problem calculates the change"<<endl;
        cout<<"Input the Price of the Product and the Amount Tendered"<<endl;
        cin>>price>>tndrd;
    }while(price>tndrd);
    
    //Calculate the change
    change=(tndrd-price+HLFPNY)*CNVPNY;//Accounts for float inaccuracy
    nDlrs=(change-change%DOLLAR)/DOLLAR;
    change-=(nDlrs*DOLLAR);
    nQtrs=(change-change%QUARTER)/QUARTER;
    change-=(nQtrs*QUARTER);
    nDimes=(change-change%DIME)/DIME;
    change-=(nDimes*DIME);
    nNckls=(change-change%NICKEL)/NICKEL;
    change-=(nNckls*NICKEL);
    change=nDlrs*DOLLAR+nQtrs*QUARTER+nDimes*DIME+nNckls*NICKEL;
    
    
    //Display/Output all pertinent variables
    cout<<"The change in Pennies  = "<<change<<endl;
    cout<<"The number of Dollars  = "<<static_cast<int>(nDlrs)<<endl;
    cout<<"The number of Quarters = "<<static_cast<int>(nQtrs)<<endl;
    cout<<"The number of Dimes    = "<<static_cast<int>(nDimes)<<endl;
    cout<<"The number of Nickels  = "<<static_cast<int>(nNckls)<<endl;
    
    //Exit the program
    return 0;
}
