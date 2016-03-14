/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: xinxiang
 *
 * Created on March 13, 2016, 11:44 PM
 * Purpose: Male and Female Percentage
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
    //Declare Variables
    unsigned int male, female, total;
    float perc_male, perc_female;
    
    //Input variables
    cout<<"The amount of male in the class is ";
    cin>>male;
    
    cout<<"The amount of female in the class is ";
    cin>>female;
    
    total=female+male;
    perc_male=static_cast<float>(male)/total;
    perc_female=static_cast<float>(female)/total;
    
    
    cout<<fixed<<showpoint<<setprecision(3)<<"The percentage of male is "
            <<perc_male<<endl;
    
    cout<<fixed<<showpoint<<setprecision(3)<<"The percentage of female is "
            <<perc_female<<endl;
    
   
   
    //Exit

    return 0;
}

