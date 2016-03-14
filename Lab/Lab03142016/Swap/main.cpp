/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 14, 2016, 10:31 AM
 * Purpose: Swap
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Prototype Functions

//Execution Starts Here

int main(int argc, char** argv) {
    //Declare Variables
    int a,b;
    
    //input two variables a and b
    cout<<"Please enter two integer numbers: "<<endl;
    cin>>a>>b;
    
    //Output results
    a=a^b;
    b=a^b;
    a=a^b;
    
    cout<<"Previous a="<<b<<" Later b="<<b<<endl;
    cout<<"Previous b="<<a<<" Later a="<<a<<endl;
    
    

    return 0;
}

