/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on Nov 6th, 2017, 10:30 AM
 * Purpose:  Creating a Uniform Random Number Generator [0,1]
 *           Testing the Probability of Hit
 */

//System Libraries
#include <iostream>     //Input/Output Stream Library
#include <cstdlib>      //Rand and Srand
#include <ctime>        //Time function Library
#include <cmath>        //Math Library
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants
const unsigned int MAXRAND=pow(2,31)-1;

//Function Prototypes
float pRand();
void shoot(bool,float,bool &,bool &);

//Execution Begins Here!
int main(int argc, char** argv) {
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
    return 0;
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