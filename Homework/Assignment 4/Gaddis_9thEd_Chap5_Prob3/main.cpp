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
 * Purpose: Ocean Levels
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
    int year;
    float lvl;
    
    //Input Variables
    cout<<"Year"<<setw(8)<<"Level"<<endl;
    for(year=1;year<=25;year++)
    {
        lvl=lvl+1.5;
        
    cout<<setw(2)<<year<<setw(9)<<lvl<<endl;
    }
            
    
    //Output Results
    
    

    return 0;
}

