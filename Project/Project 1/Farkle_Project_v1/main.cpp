/* 
 * File:   main.cpp
 * Author: Adam Wayman
 * Created on Nov 4th, 2017, 10:21PM
 * Purpose:   Farkle Game Project v1 (game)
 */

//System Libraries
#include <iostream>//Input/Output Stream Library
#include <cstdlib>//Random number
#include <iomanip>
#include <ctime>//time
using namespace std;    //Standard Name-space under which System Libraries reside

//User Libraries

//Global Constants - Not variables only Math/Science/Conversion constants

//Function Prototypes
int throwdie();
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int point=0; //changing variable for points
    int roll1,roll2,roll3,roll4,roll5,roll6; // rolls
    int dupes=0;//Number of dupes
    int pairs=0;//Number of pairs
    int quads=0;//number of quads(four of a kind)
    //Initialize Variables/rolls
    srand(static_cast<unsigned int>(time(0)));
    roll1=rand()%6+1;//[1,6]
    roll2=rand()%6+1;//[1,6]
    roll3=rand()%6+1;//[1,6]
    roll4=rand()%6+1;//[1,6]
    roll5=rand()%6+1;//[1,6]
    roll6=rand()%6+1;//[1,6]
     //Scoring the rolls
    //check for ones
    if(roll1==1)
        point=point+100;
    if(roll2==1)
        point=point+100; 
    if(roll3==1)
        point=point+100;
    if(roll4==1)
        point=point+100;
    if(roll5==1)
        point=point+100;
    if(roll6==1)
        point=point+100;
    //check for fives
        if(roll1==5)
        point=point+50;
    if(roll2==5)
        point=point+50; 
    if(roll3==5)
        point=point+50;
    if(roll4==5)
        point=point+50;
    if(roll5==5)
        point=point+50;
    if(roll6==5)
        point=point+50;
    //check for three ones 
    dupes=0;
    if(roll1==1)dupes++;
    if(roll2==1)dupes++;
    if(roll3==1)dupes++;
    if(roll4==1)dupes++;
    if(roll5==1)dupes++;
    if(roll6==1)dupes++;
    if(dupes>=3)point=point+1000;
    if(dupes==2)pairs=pairs+1;
    if(dupes==4)quads=quads+1;
    //check for three twos
    dupes=0;
    if(roll1==2)dupes++;
    if(roll2==2)dupes++;
    if(roll3==2)dupes++;
    if(roll4==2)dupes++;
    if(roll5==2)dupes++;
    if(roll6==2)dupes++;
    if(dupes>=3)point=point+200;
    if(dupes==2)pairs=pairs+1;
    if(dupes==4)quads=quads+1;
    //check for three threes
    dupes=0;
    if(roll1==3)dupes++;
    if(roll2==3)dupes++;
    if(roll3==3)dupes++;
    if(roll4==3)dupes++;
    if(roll5==3)dupes++;
    if(roll6==3)dupes++;
    if(dupes>=3)point=point+300;
    if(dupes==2)pairs=pairs+1;
    if(dupes==4)quads=quads+1;
    //check for three fours
    dupes=0;
    if(roll1==4)dupes++;
    if(roll2==4)dupes++;
    if(roll3==4)dupes++;
    if(roll4==4)dupes++;
    if(roll5==4)dupes++;
    if(roll6==4)dupes++;
    if(dupes>=3)point=point+400;
    if(dupes==2)pairs=pairs+1;
    if(dupes==4)quads=quads+1;
    //check for three fives
    dupes=0;
    if(roll1==5)dupes++;
    if(roll2==5)dupes++;
    if(roll3==5)dupes++;
    if(roll4==5)dupes++;
    if(roll5==5)dupes++;
    if(roll6==5)dupes++;
    if(dupes>=3)point=point+500;
    if(dupes==2)pairs=pairs+1;
    if(dupes==4)quads=quads+1;
    //check for three sixes
    dupes=0;
    if(roll1==6)dupes++;
    if(roll2==6)dupes++;
    if(roll3==6)dupes++;
    if(roll4==6)dupes++;
    if(roll5==6)dupes++;
    if(roll6==6)dupes++;
    if(dupes>=3)point=point+600;
    if(dupes==2)pairs=pairs+1;
    if(dupes==4)quads=quads+1;
    //check for pairs
    if(pairs==3)point=point+1500;
    //check for quads and pair (four of a kind plus a pair)
    if(quads==1&&pairs==1)point=point+1500;
    //check for straight
    if(roll1==1&&roll2==2&&roll3==3&&roll4==4&&roll5==5&&roll6==6)point=point+3000;
    //Display/Output all pertinent variables
    cout<<"roll 1 = "<<roll1<<endl;
    cout<<"roll 2 = "<<roll2<<endl;
    cout<<"roll 3 = "<<roll3<<endl;
    cout<<"roll 4 = "<<roll4<<endl;
    cout<<"roll 5 = "<<roll5<<endl;
    cout<<"roll 6 = "<<roll6<<endl;
    cout<<"your score is "<<point<<endl;
    //Exit the program
    return 0;
}
int throwdie(){
   srand(static_cast<unsigned int>(time(0)));
   return (rand()%6+1);
               }