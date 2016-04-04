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
 * Purpose: Distance Traveled
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
    float time;
    float distance;
    float speed;
    int i;
    
    
    //Input Variables
    cout<<"What is the speed of the vehicle in mph? ";
    cin>>speed;
    cout<<"How many hours has it traveled? ";
    cin>>time;
 
    //Output Results
    cout<<setw(2)<<"Hour"<<setw(8)<<"Distance Traveled"<<endl;
    
    for(i=1;i<=time;i++)
    {
        distance=i*speed;
        cout<<setw(2)<<i<<setw(8)<<distance<<endl;
    }
    

    return 0;
}

