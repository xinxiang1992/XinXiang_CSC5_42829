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
 * Purpose: Body Mass Index
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
    float weight, height, bmi;
   
    
    //Input variables
    cout<<"Please enter your weight: ";
    cin>>weight;
    cout<<"Please enter your height: ";
    cin>>height;
    
    
    //Calculate the variables
    bmi=(weight*703)/(height*height);
    
    //Output Variables
    switch(bmi<18.5)
    {
        case true: cout<<"You are underweight."<<endl;
        break;
        default:
            switch(bmi>=18.5&&bmi<=25)
            {
                case true: cout<<"You are optimal weight."<<endl;
                break;
                default:
                    switch(bmi>25)
                    {
                        case true: cout<<"Your weight are overweight."<<endl; 
                    }
            }
        
    }
    //Exit
        
    
   

    return 0;
}

