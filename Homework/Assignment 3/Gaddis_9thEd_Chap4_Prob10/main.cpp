/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: xinxiang
 *
 * Created on March 23, 2016, 11:45 PM
 * Purpose: 
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Prototype Function

//Execution Starts here


int main(int argc, char** argv) {
    //Declare Variables
    int numM; //The integer number of months
    int year;
    float div; //Division by 100
   
   
    //Input variables
    cout<<"Please enter the integer number of any months you like: ";
    cin>>numM;
    cout<<"Please enter the year: ";
    cin>>year;
    
    
    //Calculate the variables
    div=year%100;
    
    //Output Variables
    if (div==0)
    {
        if (year%400==0)
        {
            cout<<"The year is leap year."<<endl;
        }
            else
            {
                cout<<"The year is not leap year."<<endl;
            }
    }
    
    else
    {
        if(year%4==0)
        {
            cout<<"The year is leap year."<<endl;
        }
            else
            {
                cout<<"The year is not leap year."<<endl;
            }
        
   
    }
  
    //Exit
        
    
   

    return 0;
}

