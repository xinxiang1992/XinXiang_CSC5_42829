/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: xinxiang
 *
 * Created on March 21, 2016, 9:57 PM
 * Purpose: Minimum/Maximum
 */

//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototype

//Execution Starts Here

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float num1,num2,comp;
    
    //Input Variables
    cout<<"Please enter any two numbers: \n";
    cin>>num1;
    cin>>num2;
    
    //Output Variables
    
    comp=(num1>num2)?num1:num2;
    cout<<"The maximum number is "<<comp<<endl;
    
    //Exit Stage

    return 0;
}

