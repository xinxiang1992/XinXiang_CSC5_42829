/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: xinxiang
 *
 * Created on April 3, 2016, 10:11 PM
 * Purpose: Membership Fees Increase
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants

//Prototype functions 

//Execution Starts Here

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float rate=0.004f;
   
    float future_f=2500;//future fees
    int year;
    
    //Input Variables
    for(year=1;year<=6;year++)
    {
       
        future_f=future_f*(1+rate);
        cout<<setw(2)<<year<<setw(15)<<future_f<<endl;
               
    }
  
            
    
    //Output Results
    
    

    return 0;
}

