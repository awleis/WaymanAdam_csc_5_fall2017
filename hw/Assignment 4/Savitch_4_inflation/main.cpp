/* 
 * File:   main.cpp
 * Author: Adam Wayman
 *Savitch inflation calculator 
 * Created on October 17, 2017, 11:55 AM
 */

#include <iostream>
#include <cmath>

using namespace std;
//Global constant



int main(int argc, char** argv) {
//Declare Variables
  int yrNow=2017,yrThen;
float infRate,prNow,prThen;  
 //initialize
  
  //Input
  cout<<"This program calculates inflation rate"<<endl;
  cout<<"Year and price of original item "<<endl;
  cout<<"as well as price today"<<endl;
  cin>>yrThen>>prThen>>prNow;
  //process
   infRate=.09;
  float delta,tol=.001,prCalc;
  float kGain=.001;
  do{
        prCalc=prThen;
        for(int year=yrThen+1;year<=yrNow;year++){
        prCalc*=(1+infRate);
        }
        delta=prNow-prCalc;
        infRate+=kGain*delta;
          }while(abs(delta)>=tol);
    //output
  cout<<"In "<<yrThen<<" the price = $"<<prThen<<endl;
  cout<<"In "<<yrNow<<" the price = $"<<prNow<<endl;
  cout<<"The price calculated = "<<prCalc<<endl;
  cout<<"The inflation rate   = "<<infRate*100<<"%"<<endl;
    
    
    
    
    
    
    
    
    
    return 0;
}

