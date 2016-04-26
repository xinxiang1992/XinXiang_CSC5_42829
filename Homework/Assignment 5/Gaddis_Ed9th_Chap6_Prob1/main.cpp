/* 
 * File:   main.cpp
 * Author: Xin Xiang
 *
 * Created on April 25, 2016, 9:30 AM
 * Purpose: Markup
 */

//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
float retail(float, float);
//Execution Starts Here

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float wholesale, perct;
    
    //input variables
    cout<<"Please enter the wholesale: ";
    cin>>wholesale;
    cout<<"Please enter the percentage: ";
    cin>>perct;
    
    //output the variables
    if (wholesale<0||perct<0)
    {
        cout<<"Invalid Inputs."<<endl;
        return 0;
    }
    else
    {
       cout<<"The retail is "<<retail(wholesale,perct)<<endl; 
    }

    return 0;
}

/*********************************\
                         Input retail ************************************/

float retail(float wholesale, float perct)
{
    return wholesale*(1+perct);
}
