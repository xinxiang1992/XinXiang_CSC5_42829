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
 * Purpose: sum of numbers
 */

//System Libraries
#include <iostream>

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
    unsigned int num;
    unsigned int sum;
    unsigned int init;//initial
    
    //Input Variables
    cout<<"Please enter an integer number: ";
    cin>>num;
    
    //Output Results
    for(init=1;init<=num;init++)
    sum=sum+init;
  
    cout<<"The sum of numbers are: "<<sum<<endl;
    
    //Exit Stage
    

    return 0;
}

