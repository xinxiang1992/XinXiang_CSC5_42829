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
 * Purpose: Software Sales
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
    float sale=99;
    float quantity;
    float cost;

   
    //Input variables
    cout<<"Please enter the amount of units: ";
    cin>>quantity;
    
    //Calculate the variables
    
    
    //Output Variables
    cost=(quantity>=10&&quantity<=19)? 0.8*sale*quantity:
        
        (quantity>=20&&quantity<=49)? 0.7*sale*quantity:
            
            (quantity>=50&&quantity<=99)? 0.6*sale*quantity:
                
                (quantity>=100)? 0.5*sale*quantity:0;
    
    cout<<"The cost is "<<cost<<"$."<<endl;
                    
  
    //Exit
        
    
   

    return 0;
}

