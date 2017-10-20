/* 
 * File:   main.cpp
 * Author: Adam Wayman
 * Calculate annual tax cost of new house after a year
 * Created on October 19, 2017, 6:52 PM
 */

#include <iostream>
#include <fstream>

using namespace std;
//Functions

float intr(float curbal){
    float mon;//monthly interest
    mon=curbal*1.0025;
    
    return (mon);
}
float getcurB(float curbal){
   curbal=curbal+intr(curbal);
   curbal=curbal-(curbal*.005);
   return(curbal);
}
int main(int argc, char** argv) {
//Declare Variables
    float pr,dnpay;//price and down payment
    float curbal,sumint;
    int mon;
    
    
//input
    cout<<"Enter the price of the house"<<endl;
    cin>>pr;
    cout<<"Enter the Down payment"<<endl;
    cin>>dnpay;
    curbal=pr-dnpay;
    //loop
    for(mon=1;mon<=12;mon++){
        
    
//calculate interest
    sumint=sumint+intr(curbal);
//calculate current balance
    curbal=getcurB(curbal);
}
//calculation
    float tax_sav;
    tax_sav=sumint*.35;
    
    
//output    
    cout<<"The tax savings is "<<tax_sav<<endl;
    cout<<"Current balance is "<<curbal<<endl;
    
    
    
    
    
    
    
    return 0;
}

