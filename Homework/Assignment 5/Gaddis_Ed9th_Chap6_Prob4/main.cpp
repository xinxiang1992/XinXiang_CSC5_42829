/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: xinxiang
 *
 * Created on April 25, 2016, 7:00 PM
 * Purpose: Safest Driving Area
 */
//System Libraries
#include <iostream>
#include <string>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
int numAcc(string);//Number of Accidents
void lowest(int,int,int,int,int);
//Execution Starts Here

/*
 * 
 */
int main(int argc, char** argv) {
//Declare Variables
    float acc1,acc2,acc3,acc4,acc5;
    
    //Input variables
    acc1=numAcc("North");
    acc2=numAcc("South");
    acc3=numAcc("East");
    acc4=numAcc("West");
    acc5=numAcc("Central");
    
    lowest(acc1,acc2,acc3,acc4,acc5);
    return 0;
}

/***************************Find Location******************************************/
int numAcc(string location)
{
    int acc;
    cout<<"The location of "<<location<<", it has: ";
    cin>>acc;
    
    if(acc<0)
    {
        cout<<"Invalid Inputs."<<endl;
    }
    else return acc;
}
/***********************Lowest*************************************************/
void lowest(int acc1,int acc2,int acc3,int acc4,int acc5)
{
    if(acc1<acc2&&acc1<acc3&&acc1<acc4&&acc1<acc5)
    {
        cout<<"The lowest one is North which has "<<acc1<<endl;
    }
    else if(acc2<acc1&&acc2<acc3&&acc2<acc4&&acc2<acc5)
    {
        cout<<"The lowest one is South which has "<<acc2<<endl;
    }
    else if(acc3<acc1&&acc3<acc2&&acc3<acc4&&acc3<acc5)
    {
        cout<<"The lowest one is East which has "<<acc3<<endl;
    }
    else if(acc4<acc1&&acc4<acc2&&acc4<acc3&acc4<acc5)
    {
        cout<<"The lowest one is West which has "<<acc4<<endl;
    }
    else if(acc5<acc1&&acc5<acc2&&acc5<acc3&&acc5<acc4)
    {
        cout<<"The lowest one is Central which has "<<acc5<<endl;
    }
}