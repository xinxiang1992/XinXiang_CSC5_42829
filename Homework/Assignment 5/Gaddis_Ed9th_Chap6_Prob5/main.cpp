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
 * Purpose: Fallign Distance
 */

//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
float fallingD(int);
//Execution Starts Here

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float dis;
    int t;//time in second
    
    for(int t=1;t<=10;t++)
    {
       dis=fallingD(t); 
       cout<<"After the "<<t<<"s, the falling distance in meter is "<<dis
                <<endl;
    }
    
    

    return 0;
}
/*******************************Falling Distance********************************/
float fallingD(int t)
{
    return 0.5*9.8*t*t;
}
