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
 * Purpose: Roman Numeral Converter
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
    int num;
    
    
    //Input variables
    cout<<"Please enter a number from 1 to 10: "<<endl;
    cin>>num;
    
    //Output Variables
    switch(num){
        case 1: cout<<"The number "<<num<<" of Roma numerical is I"<<endl;
       break;
        case 2: cout<<"The number "<<num<<" of Roma numerical is II"<<endl;
       break;
        case 3: cout<<"The number "<<num<<" of Roma numerical is III"<<endl;
       break;
        case 4: cout<<"The number "<<num<<" of Roma numerical is IV"<<endl;
       break;
        case 5: cout<<"The number "<<num<<" of Roma numerical is V"<<endl;
       break;
        case 6: cout<<"The number "<<num<<" of Roma numerical is VI"<<endl;
       break;
        case 7: cout<<"The number "<<num<<" of Roma numerical is VII"<<endl;
       break;
        case 8: cout<<"The number "<<num<<" of Roma numerical is VIII"<<endl;
       break;
        case 9: cout<<"The number "<<num<<" of Roma numerical is IX"<<endl;
       break;
        case 10: cout<<"The number "<<num<<" of Roma numerical is X"<<endl;
       break;
        default: cout<<"The number you enter is invalid."<<endl;
    }
   

    return 0;
}

