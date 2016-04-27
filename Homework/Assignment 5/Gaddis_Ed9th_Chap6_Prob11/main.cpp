/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: xinxiang
 *
 * Created on April 25, 2016, 9:56 PM
 * Purpose: Lowest Score Drop
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
void getscore(float &);
void calcaverage(float,float,float,float,float);
float findLowest(float,float,float,float,float);


//Execution Starts Here

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    srand(static_cast<unsigned int>(time(0)));
    float score1,score2,score3,score4,score5;
    float average;
    float low;
    //Input Values
    
    cout<<"Please enter five scores."<<endl;
    
    cout<<"The first score is: ";
    getscore(score1);
    cout<<"The second score is: ";
    getscore(score2);
    cout<<"The third score is: ";
    getscore(score3);
    cout<<"The forth score is: ";
    getscore(score4);
    cout<<"The fifth score is: ";
    getscore(score5);
    
    
    //Output results
    cout<<"The lowest one is "<<findLowest(score1,score2,score3,score4,score5)<<endl;
    
    calcaverage(score1,score2,score3,score4,score5);
 
    return 0;
}

void getscore(float &score)
{
    cin>>score;
    if(score<0||score>100)
    {
        cout<<"Invalid scores."<<endl;
    }
    
    
}

float findLowest(float score1,float score2,float score3,float score4,float score5)
{
    float number=1478;
   if(score1<score2&&score1<score3&&score1<score4&&score1<score5)
   {
       number=score1;
   }
   else if(score2<score1&&score2<score3&&score2<score4&&score2<score5)
   {
       number=score2;
   }
   else if(score3<score1&&score3<score2&&score3<score4&&score3<score5)
   {
       number=score3;
   }
   else if(score4<score1&&score4<score2&&score4<score3&&score4<score5)
   {
       number=score4;
   }
   else if(score5<score1&&score5<score2&&score5<score3&&score5<score4)
   {
       number=score5;
   }
    
    
    return number;
   
}

void calcaverage(float n1,float n2,float n3,float n4,float n5)
{
    float ave;
    float min;
    min=findLowest(n1,n2,n3,n4,n5);
    
    ave=(n1+n2+n3+n4+n5-min)/4.0;
    cout<<"The average point is "<<ave<<endl;
    
}
