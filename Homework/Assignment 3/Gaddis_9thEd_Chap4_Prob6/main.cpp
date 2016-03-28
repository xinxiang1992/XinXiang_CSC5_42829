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
 * Purpose: Mass and Weight
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
    float mass, weight;
   
   
    //Input variables
    cout<<"Please enter the mass you like: ";
    cin>>mass;
    
    //Calculate the variables
    weight=mass*9.8;
    
    //Output Variables
     
    if (weight<10)
    {
        cout<<"The weight is too light."<<endl;
    }
    else if (weight>1000)
    {
        cout<<"The weight is too heavy."<<endl;
    }
    else if (weight>=10&&weight<=1000)
    {
         cout<<"The weight of the mass you just entered is: "
                 <<weight<<" N."<<endl;
    }
  
    //Exit
        
    
   

    return 0;
}

