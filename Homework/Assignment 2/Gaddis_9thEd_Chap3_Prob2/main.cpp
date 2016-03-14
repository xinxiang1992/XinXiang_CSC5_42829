/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: xinxiang
 * Created on March 13, 2016, 10:14 PM
 * Purpose: Stadium Seating
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
    //Delcare Variables
    
    //The number of tickets for each Class.
    unsigned int ticketA, ticketB, ticketC;  
    
    //The prices for each Class
    unsigned int priceA=15,priceB=12,priceC=9;
    
    int amount; //The amount of prices
    
    //Input variables
    cout<<"The number of tickets for Class A is ";
    cin>>ticketA;
    
    cout<<"The number of tickets for Class B is ";
    cin>>ticketB;
    
    cout<<"The number of tickets for Class C is ";
    cin>>ticketC;
    
    //Calculate Variables
    amount=ticketA*priceA+ticketB*priceB+ticketC*priceC;
    
    cout<<fixed<<showpoint<<setprecision(2)<<
            "The amount is "<<static_cast<float>(amount)<<endl;
    
    
    //Exit
    

    return 0;
}

