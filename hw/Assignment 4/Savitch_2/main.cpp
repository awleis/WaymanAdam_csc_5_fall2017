
/* 
 * File:   main.cpp
 * Author: Adam Wayman
 *
 * Created on October 18, 2017, 1:20 PM
 */

#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;
//Functions
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
int main(int argc, char** argv) {
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
    
    
    
    
    
    return 0;
}

