/* 
 * File:   main.cpp
 * Author: Adam Wayman  
 * Created on Nov 13th, 2017, 11:23 AM
 * Purpose:  Day of the week
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cstdlib>      //Exit function
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
unsigned char cnvMnth(string);
unsigned char cnvDay(string);
bool isLpYr(unsigned short);
unsigned char gtCntVl(unsigned short);
unsigned char gtYrVal(unsigned short);
unsigned char gtMnVal(unsigned char, unsigned short);
string wkDay(unsigned char, unsigned char, unsigned short);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string month,day;
    unsigned short year;
    unsigned char nMonth,nDay;
    
    //Input Data/Variables
    do{
        cout<<"This program converts a date to a day"<<endl;
        cout<<"Input a date in the form mmmm dd, yyyy"<<endl;
        cout<<"For instance June 12, 1955"<<endl;
        cin>>month>>day>>year;
        nMonth=cnvMnth(month);
        nDay=cnvDay(day);
        cout<<"You input "<<static_cast<int>(nMonth)
                <<"/"<<static_cast<int>(nDay)
                <<"/"<<year<<endl;
    }while(nMonth==0||nDay>31);
    
    //Process or map the inputs to the outputs
    //And output the results
    cout<<"The Day of the Week = "<<
            wkDay(nMonth,nDay,year)<<endl;
    
    //Exit the program
    return 0;
}

string wkDay(unsigned char month, unsigned char day, unsigned short year){
    unsigned char dyOfWk=(day+gtMnVal(month,year)
                    +gtYrVal(year)+gtCntVl(year))%7;
    switch(dyOfWk){
        case 0:return "Sunday";
        case 1:return "Monday";
        case 2:return "Tuesday";
        case 3:return "Wednesday";
        case 4:return "Thursday";
        case 5:return "Friday";
        case 6:return "Saturday";
    }
}

unsigned char gtMnVal(unsigned char month, unsigned short year){
    switch(month){
        case 1:{
            if(isLpYr(year))return 6;
            else return 0;
        }
        case 2:{
            if(isLpYr(year))return 2;
            else return 3;
        }
        case 3: return 3;
        case 4: return 6;
        case 5: return 1;
        case 6: return 4;
        case 7: return 6;
        case 8: return 2;
        case 9: return 5;
        case 10:return 0;
        case 11:return 3;
        case 12:return 5;
        default:exit(EXIT_FAILURE);
    }
}

unsigned char gtYrVal(unsigned short year){
    return year%100+(year%100)/4;
}

unsigned char gtCntVl(unsigned short year){
    return 2*(3-(year/100)%4);
}

bool isLpYr(unsigned short year){
    return ((year%400==0) || ((year%4==0) && year%100!=0));
}

unsigned char cnvDay(string day){
    char nDay=day[0]-'0';
    if(day[1]!=',')nDay=nDay*10+(day[1]-48);
    return nDay;
}

unsigned char cnvMnth(string month){
    if(month=="January")  return  1;
    if(month=="February") return  2;
    if(month=="March")    return  3;
    if(month=="April")    return  4;
    if(month=="May")      return  5;
    if(month=="June")     return  6;
    if(month=="July")     return  7;
    if(month=="August")   return  8;
    if(month=="September")return  9;
    if(month=="October")  return 10;
    if(month=="November") return 11;
    if(month=="December") return 12;
    exit(EXIT_FAILURE);
}