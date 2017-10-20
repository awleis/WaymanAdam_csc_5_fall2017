/* 
 * File:   main.cpp
 * Author: Adam
 * Created on Oct 4th, 2017, 9:35 AM
 * Purpose:  Menu with loops
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>
#include <algorithm>
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
float const LTPG=0.264179;//Liters per gallon
const char  DOLLAR =100;      //Dollar contains 100 pennies
const char  QUARTER= 25;      //Quarter contains 25 pennies
const char  DIME   = 10;      //Dime contains 10 pennies
const char  NICKEL =  5;      //Nickel contains 5 pennies
const float HLFPNY =0.005f;   //Half penny round up
const char  CNVPNY =100;      //Conversion to a penny
const float GRAVITY=6.673e-8f;//Universal gravitational constant
const float CNVCMFT=1/30.48f;//30.48cm/ft
const float CNVMFT=5280.0f;//5280ft/mile
const float CNVGKG=1000.0f;//1000 grams to 1 kilogram
const float REARTH=3959.0f;//Radius of the earth 
const float MEARTH=5.972e24f;//Mass of the earth
//Function Prototypes
float(MilepG)(float liter,float mile){
    float mpg,gal;
    gal=liter/LTPG;
    mpg=mile/gal;
    
    return(mpg);
}
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
float Jacket(float ht,float wt,float age){
    float jacks;
    int agedum;
    float agedum2;
    jacks=(ht*wt)/288;
    if(age>30){
        agedum=(age-30)/10;
        agedum2=agedum*.125;
    }
    return(jacks+agedum2);
}
float Waistin(float ht,float wt,float age){
    float waist;
    int agedum;
    float agedum2;
    waist=wt/5.7;
    if(age>28){
        agedum=(age-28)/2;
        agedum2=agedum*.1;
    }
    return(waist+agedum2);
    
}
float Hatsize(float ht, float wt) {
    float htsz;
    htsz=wt/ht*2.9;
    
   return(htsz);
    
    }
float(portion)(int wdp,int frp1,int frp2){
    float sspr,num,den;
    num=frp1;
    den=frp2;
    sspr=wdp+(num/den);
    return(sspr);
}
float absolute(float a){
    
    return abs(a);
    }
int absolute(int a){
    return abs(a);
}
long absolute(long a){
   
    return abs(a);
}
float maximum(float a,float b){
   
    
    return max(a,b);
}
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    
    //Input Data/Variables
      do{  
    cout<<"Choose from the Menu"<<endl;
    cout<<"1. Problem 1"<<endl;
    cout<<"2. Problem 2"<<endl;
    cout<<"3. Problem 3"<<endl;
    cout<<"4. Problem 4"<<endl;
    cout<<"5. Problem 5"<<endl;
    cout<<"6. Problem 6"<<endl;
    cout<<"7. Problem 7"<<endl;
    cout<<"8. Problem 8"<<endl;
    cout<<"9. Problem 9"<<endl;
    cin>>choice;
    
    //Process or map the inputs to the outputs
    switch(choice){
        case 1:{
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
    

            cout<<"You are in Problem 1"<<endl;
            break;
        }
        case 2:{
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
            cout<<"You are in Problem 2"<<endl;
            break;
        }
        case 3:{
   //declare
    float ht,wt,age,hatsz,jacsz,waist;

    //input
    cout<<"Please enter your height in inches"<<endl;
    cin>>ht;
    cout<<"Please enter your weight in lbs"<<endl;
    cin>>wt;
    cout<<"Please enter your age"<<endl;
    cin>>age;
    
                 
   //output
    cout<<"Your hat size is "<<Hatsize(ht,wt)<<endl;
    cout<<"Your jacket size is "<<Jacket(ht,wt,age)<<endl;
    cout<<"Your waist size is "<<Waistin(ht,wt,age)<<endl;
            cout<<"You are in Problem 3"<<endl;
            break;
        }
        case 4:{
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
            cout<<"You are in Problem 4"<<endl;
            break;
        }
        case 5:{//Declare Variables
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
            cout<<"You are in Problem 5"<<endl;
            break;
        }
        case 6:{
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
            cout<<"You are in Problem 6"<<endl;
            break;
        }
        case 7:{
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
            cout<<"You are in Problem 7"<<endl;
            break;
        }
        case 8:{
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
            cout<<"You are in Problem 8"<<endl;
            break;
        }
        case 9:{
            //declare variables
    float n1,n2;
    
//input
    cout<<"This program will output the larger number"<<endl;
    cout<<"Enter a number"<<endl;
    cin>>n1;
    cout<<"Enter another number"<<endl;
    cin>>n2;
    //output
    cout<<"The larger number is "<<maximum(n1,n2)<<endl;
            cout<<"You are in Problem 9"<<endl;
            break;
        }
        default:{
            cout<<"You seem to have problems with instructions"<<endl;
            cout<<"You are unworthy of running this code"<<endl;
        }
    }
        }while(choice>0||choice<10);
    //Exit the program
    return 0;
}