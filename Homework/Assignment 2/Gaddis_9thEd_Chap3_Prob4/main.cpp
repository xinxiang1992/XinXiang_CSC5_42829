/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: xinxiang
 * Created on March 13, 2016, 10:49 PM
 * Purpose: Average Rainfall
 */
//System Libraries
#include <iomanip>
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Prototype Functions

//Execution Starts Here

int main(int argc, char** argv) {
    //Declare Variables
    
    //The amount of rain that fell each month
 float monthA, monthB, monthC, average;
    char mon1[8], mon2[8], mon3[8];

    cout<<"The name of the month: ";
    cin>>mon1;
    cout<<"The amount of the rain fell of "<<mon1<<" is : ";
    cin>>monthA;
    
    
    
    cout<<"The name of the month: ";
    cin>>mon2;
    cout<<"The amount of the rain fell of "<<mon2<<" is : ";
    cin>>monthB;
    
    
    cout<<"The name of the month is ";
    cin>>mon3;
    cout<<"The amount of the rain fell of "<<mon3<<" is: ";
    cin>>monthC;
   
    average=(monthA+monthB+monthC)/3;
    
    cout<<fixed<<showpoint<<setprecision(3);
    cout<<"The average rainfall for "<<mon1<<", "<<
            mon2<<",and "<<mon3<<"is "<<
            average<<" inches."<<endl;
    
    //Exit
    
    return 0;
}

