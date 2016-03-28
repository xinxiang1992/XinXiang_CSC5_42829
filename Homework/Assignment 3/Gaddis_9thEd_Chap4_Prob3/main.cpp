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
 * Purpose: Magic Dates
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
    int date, month, year;
    
    
    //Input variables
    cout<<"Please enter the date: ";
    cin>>date;
    cout<<"Please enter the month: ";
    cin>>month;
    cout<<"Please enter two digits of year: ";
    cin>>year;
 
    
    //Output Variables
    if(year==date*month)
        cout<<"The date is magic."<<endl;
        else
            cout<<"The date is not magic."<<endl;
    //Exit
        
    
   

    return 0;
}

