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
 * Purpose:Celsius Temperature Table
 */

//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
float celsius(float);
//Execution Starts Here

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    
    float cel;
    
    for(int i=0;i<=20;i++)
    {
        cel=celsius(i);
        cout<<"The Frahrenhait "<<i<<" in Celsius is "<<cel<<endl;
    }
    return 0;
}
/*******************************Kinetic Energy********************************/
float celsius(float i)
{
    return 5*(i-32)/9;
}