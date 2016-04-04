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
 * Purpose: Calories Burned
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
    int min;
    float burned;//The calories you burn
    
    //Input Variables
    cout<<setw(2)<<"Minutes"<<setw(8)<<"Burned"<<endl;
    for(min=0;min<=6;min++)
    {
        burned=burned+5*min*3.6;
    cout<<setw(4)<<(min*5)<<setw(10)<<burned<<endl;
    }
            
    
    //Output Results
    
    

    return 0;
}

