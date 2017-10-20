/* 
 * File:   main.cpp
 * Author: Adam Wayman
 *savitch_ weight
 * Created on October 17, 2017, 11:55 AM
 */

#include <iostream>
#include <cmath>

using namespace std;
//Global constant
const float GRAVITY=6.673e-8f;//Universal gravitational constant
const float CNVCMFT=1/30.48f;//30.48cm/ft
const float CNVMFT=5280.0f;//5280ft/mile
const float CNVGKG=1000.0f;//1000 grams to 1 kilogram
const float REARTH=3959.0f;//Radius of the earth 
const float MEARTH=5.972e24f;//Mass of the earth


int main(int argc, char** argv) {
//Declare Variables
  float myMass,myWgt,actWgt;  
 //initialize
  myMass=6.0f;
  //Input
  cout<<"This program converts your weight in lbs to"<<endl;
  cout<<"your mass in slugs"<<endl;
  cout<<"Input your actual weight in Lbs"<<endl;
  cin>>actWgt;
  //process
  float delta, tol=.01f;
  float kGain=tol;
  do{
           myWgt=GRAVITY*CNVCMFT*CNVCMFT*CNVCMFT*MEARTH*CNVGKG*myMass/
          (REARTH*REARTH*CNVMFT*CNVMFT);
           delta=actWgt-myWgt;
           myMass+=kGain*delta;
  }while(abs(delta)>=tol);
    //output
  cout<<"Your weight = "<<myWgt<<"lbs"<<endl;
  cout<<"Your mass    = "<<myMass<<" slugs"<<endl;
    
    
    
    
    
    
    
    
    
    return 0;
}

