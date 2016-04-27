/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: xinxiang
 *
 * Created on April 25, 2016, 9:56 PM
 * Purpose: Present Value
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
float presentV(int,float,int);
//Execution Starts Here

/*
 * 
 */

int main(int argc, char** argv) {
    //Declare Variables
    float present;//Present Value
    int n;//number of years
    int f=10000;//Future values
    float r;//annual interest rate
    
    //input values
    cout<<"Input annual rate you like: ";
    cin>>r;
    cout<<"Input number of years you like: ";
    cin>>n;
    
    
    present=presentV(f,r,n);
    cout<<"The present value you have to deposit is "<<present<<endl;
	
    return 0;
}

/************************Find Present Values**************************************************/
float presentV(int f,float r,int n)
{
       float a;
       float p;//present value
       a=pow((1+r),n);
       p=f/a;
       
       
     return p;  
}
