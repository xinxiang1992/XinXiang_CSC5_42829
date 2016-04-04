/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 4, 2016, 8:51 AM
 * Purpose: Average  Rainfall
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototype
/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    int year;
    int totMonth;
    float average;
    float rainfall;
    float totRain;
    int month;
    
    
    //Input Variables
    cout<<"Please enter the number of years: ";
    cin>>year;
    
    //Loop
    if(year<1)
    {
        cout<<"Please enter a number bigger than 1 for years."<<endl;
    }
    else
{
    
    for(int i=1;i<=year;i++)
    {
        for(int j=1;j<=12;j++)
        {
            cout<<"Please enter the inches of rainfall of month "<<j<<": ";
            cin>>rainfall;
            if(rainfall<0)
            {
                cout<<"Not Valid inches for rainfall."<<endl;
            }
            else
            {
                totRain=totRain+rainfall;
            }
            
        }
    }
}
    month=year*12;
    average=totRain/month;
    
    //Output the Results
    cout<<"In total, we have "<<month<<" months."<<endl;
    cout<<"The total rain fall is "<<totRain<<" inches."<<endl;
    cout<<"The average rain fall is "<<average<<" inches."<<endl;

    return 0;
}

