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
 * Purpose: Kinetic Energy
 */

//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
float kenergy(float,float);
//Execution Starts Here

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float kinetic;
    float mass;
    float velocity;
    
    cout<<"Please enter the object's mass in kg: ";
    cin>>mass;
    cout<<"Please enter the object's velocity in m/s: ";
    cin>>velocity;
    kinetic=kenergy(mass,velocity);
    
    cout<<"The "<<mass<<"kg with "<<velocity<<" m/s has kinetic energy "
            <<kinetic<<"J."<<endl;
   
    return 0;
}
/*******************************Falling Distance********************************/
float kenergy(float mass,float velocity)
{
    return 0.5*mass*velocity*velocity;
}