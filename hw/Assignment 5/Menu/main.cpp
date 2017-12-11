/* 
 * File:   main.cpp
 * Author: Adam Wayman
 * Created on nov 14 2017
 * Purpose:  Menu with Loops
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cmath>
#include <cstdlib>
#include <ctime>        //Time function Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const unsigned int MAXRAND=pow(2,31)-1;
//Function Prototypes
float average(float s1,float s2,float s3,float s4);
float standev(float s1,float s2,float s3,float s4);
float input();
float metcalc(float inch);
float centcalc(float metr);
void output(float inch,float metr,float cent);
float input2();
float kilocalc(float ounces);
float Gramcalc(float kilo);
void output2(float ounce,float kilo,float gram);
unsigned char cnvMnth(string);
unsigned char cnvDay(string);
bool isLpYr(unsigned short);
unsigned char gtCntVl(unsigned short);
unsigned char gtYrVal(unsigned short);
unsigned char gtMnVal(unsigned char, unsigned short);
string wkDay(unsigned char, unsigned char, unsigned short);
float calc(float a,float b,float c);
float pRand();
void shoot(bool,float,bool &,bool &);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int choice;
    
    //Loop the Menu and Problems
    do{
    
        //Input Data/Variables
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
    float s1,s2,s3,s4;//Score inputs
    
    //Initialize Variables
    
    //Input Data/Variables
    cout<<"Enter Scores (1,2,3,4)"<<endl;
    cin>>s1>>s2>>s3>>s4;      
    //Process or map the inputs to the outputs
   
    //Display/Output all pertinent variables
    cout<<"The average is "<<average(s1,s2,s3,s4)<<endl;
    cout<<"The standard deviation is "<<standev(s1,s2,s3,s4)<<endl;
    //Exit the program
                cout<<"You are in Problem 1"<<endl;
                break;
            }
            case 2:{
                //Declare Variables
    float inch;
    float metr;
    float cent;
    //Initialize Variables
    
    //Input Data/Variables
    inch=input();
    metr=metcalc(inch);
    cent=centcalc(metr);
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    output(inch, metr,cent);
    //Exit the program
                cout<<"You are in Problem 2"<<endl;
                break;
            }
            case 3:{
                //Declare Variables
    float ounce;
    float kilo;
    float gram;
    //Initialize Variables
    
    //Input Data/Variables
    ounce=input();
    kilo=kilocalc(ounce);
    gram=Gramcalc(kilo);
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    output2(ounce,kilo,gram);
    //Exit the program
                cout<<"You are in Problem 3"<<endl;
                break;
            }
            case 4:{
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
                cout<<"You are in Problem 4"<<endl;
                break;
            }
            case 5:{
                   //Declare Variables
    float a,b,c;//sides of triangle
    //Initialize Variables
    cout<<"Enter the values for the sides of the triangles"<<endl;
    cin>>a>>b>>c;
    //Input Data/Variables
    
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
    cout<<"The perimeter is "<<a+b+c<<endl;
    cout<<"The area is "<<calc(a,b,c)<<endl;
    //Exit the program
                cout<<"You are in Problem 5"<<endl;
                break;
            }
            case 6:{
                 //Declare Variables
    int cth,ctm;   // current time
    int wth,wtm; // waiting time
    int th,tm;//added together
    //Initialize Variables
    cout<<"Enter the current time (hours and minutes)"<<endl;
    cin>>cth>>ctm;
    cout<<"Enter the waiting time"<<endl;
    cin>>wth>>wtm;
    //Input Data/Variables
    th=cth+wth;
    tm=ctm+wtm;
    //calculate time
    if(tm>=60){
        th=th+1;
        tm=tm-60;
    }
    
    //Process or map the inputs to the outputs
    cout<<"The time after waiting is "<<th<<":"<<tm<<endl;
    //Display/Output all pertinent variables
    
    //Exit the program
                cout<<"You are in Problem 6"<<endl;
                break;
            }
            case 7:{
                //Set th random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    bool aliveA,aliveB,aliveC;
    float pkillA,pkillB,pkillC;
    int nGames,nWinA,nWinB,nWinC;
    //Initialize Variables
   aliveA=aliveB=aliveC=true;
   pkillA=1.0f/3;
   pkillB=1.0f/2;
   pkillC=1.0f; 
   nWinA=nWinB=nWinC=0;
   nGames=10000;
    //Input Data/Variables
   for(int game=1;game<=nGames;game++){
   char aliveSm;
   do{
    shoot(aliveA,pkillA,aliveB,aliveC);
    shoot(aliveB,pkillB,aliveC,aliveA);
    shoot(aliveC,pkillC,aliveA,aliveB);
    aliveSm=aliveA+aliveB+aliveC;
   }while(aliveSm>1);
   nWinA+=aliveA;
   nWinB+=aliveB;
   nWinC+=aliveC;
   aliveA=aliveB=aliveC=true;
   }
    //Process or map the inputs to the outputs
    
    //Display/Output all pertinent variables
   cout<<"Number of games = "<<nGames<<" = "<<nWinA+nWinB+nWinC<<endl;
   cout<<"Aaron   won "<<nWinA<<" times"<<endl;
   cout<<"Bob     won "<<nWinB<<" times"<<endl;
   cout<<"Charlie won "<<nWinC<<" times"<<endl;
   
    
    //Exit the program
                cout<<"You are in Problem 7"<<endl;
                break;
            }
            case 8:{
                cout<<"You are in Problem 8"<<endl;
                break;
            }
            case 9:{
                cout<<"You are in Problem 9"<<endl;
                break;
            }
            default:{
                cout<<"Exiting, have a great day!"<<endl;
            }
        }
    }while(choice>0&&choice<10);
    
    //Exit the program
    return 0;
}
float average(float s1,float s2,float s3,float s4){
    float ave=(s1+s2+s3+s4)/4;
    return (ave); 
}
float standev(float s1,float s2,float s3,float s4){
    float ave=average(s1,s2,s3,s4);
    float variance=
    (pow(s1-ave,2)+
    pow(s2-ave,2)+
    pow(s3-ave,2)+        
    pow(s4-ave,2))/3;
    float stdd=pow(variance,.5);
    return stdd;
}
float input(){
    float feet,inch;
    cout<<"Enter length in feet"<<endl;
    cin>>feet;
    cout<<"Enter length in inches"<<endl;
    cin>>inch;
    inch=inch+(feet*12);
    return(inch);
   
}
float metcalc(float inch){
float metr;
metr=inch/39.37;
return metr;
}
float centcalc(float metr){
float cent;
cent=metr*100;
return cent;
}
void output(float inch,float metr,float cent){
    cout<<"Inches equals "<<inch<<endl;
    cout<<"meters equals "<<metr<<endl;
    cout<<"Centimeters equals "<<cent<<endl;
}
float input2(){
    float pound,ounce;
    cout<<"Enter weight in pounds"<<endl;
    cin>>pound;
    cout<<"Enter weight in ounces"<<endl;
    cin>>ounce;
    ounce=ounce+(pound*16);
    return(ounce);
   
}
float kilocalc(float ounce){
float kilo;
kilo=(ounce/16)/(2.2046);
return kilo;
}
float Gramcalc(float kilo){
float gram;
gram=kilo*1000;
return gram;
}
void output2(float ounce,float kilo,float gram){
cout<<"ounces = "<<ounce<<endl;
cout<<"Kilograms = "<<kilo<<endl;    
cout<<"Grams = "<<gram<<endl; 
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
float calc(float a,float b,float c){
    float s;
    float squr;
    float area;
    s=(a+b+c)/2;
    squr=s*(s-a)*(s-b)*(s-c);
    area=pow(squr,.5);       
    return area;
}
void shoot(bool a,float pka,bool &b,bool &c){
    if(a){
        if(b){
          if(pRand()<=pka)b=false;
       }else if(c){
          if(pRand()<=pka)c=false; 
       }
   }
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                     Shoot
//Input:
//      The shooter and their Accuracy
//      a-> alive true or false
//      pka -> a's accuracy
//Output:
//      The results of the one-sided duel
//      b-alive true or false
//      c -> or alive true or false
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890

float pRand(){
    //The maximum random number = 2^31-1
    static const float scale=1/(pow(2,31)-1);
    return rand()*scale;
}