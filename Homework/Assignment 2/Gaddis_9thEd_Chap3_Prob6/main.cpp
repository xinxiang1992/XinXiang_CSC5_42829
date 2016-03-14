/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: xinxiang
 *
 * Created on March 14, 2016, 12:04 AM
 * Purpose: Ingredient Adjuster
 */
//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants 


//Prototypes Functions

//Execution Starts Here

int main(int argc, char** argv) {
    //Declare Variables
    unsigned int cookies;
    float sugar, butter, flour;
    
    cout<<"Please enter how many cookies you want to make: ";
    cin>>cookies;
    
    //Calculate Variables
    sugar=1.5*cookies/48;
    butter=static_cast<float>(cookies)/48;
    flour=2.75*cookies/48;
    
    //Output the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The amount of "<<cookies<<" cookies, we need:"<<endl;
    cout<<sugar<<" cups of sugar."<<endl;
    cout<<butter<<" cups of butter."<<endl;
    cout<<flour<<" cups of flour."<<endl;
    
    
    
    
    //Exit

    return 0;
}

