

/* 
 * File:   main.cpp
 * Author: Adam
 * Max overload with float
 * Created on October 20, 2017, 1:14 PM
 */

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
//Functions
float maximum(float a,float b){
   
    
    return max(a,b);
}

int main(int argc, char** argv) {
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
    
    
    
    
    return 0;
}

