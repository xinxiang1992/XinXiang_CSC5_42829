/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: xinxiang
 *
 * Created on March 13, 2016, 9:47 PM
 * Purpose: Miles per Gallon
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants

//Prototype Functions

//Execution Starts Here

int main(int argc, char** argv) {
    //Declare variables
    float gallons, miles, mileage;
    
    cout<<"The the number of gallons of gas the ";
            cout<<"car can hold is "<<endl;
    cin>>gallons;
    
    cout<<"The number of miles it can be driven ";
            cout<<"on a full tank."<<endl;
    cin>>miles;
    
    //Calculate the Variables
    mileage= miles/gallons;
    
    cout<<fixed<<showpoint
            <<setprecision(3)<<"The mileage is "<<mileage<<"mpg\n.";
    
    //Exit

    return 0;
}

