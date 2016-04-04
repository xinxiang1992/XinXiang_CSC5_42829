/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 4, 2016, 8:51 AM
 * Purpose: Population
 */
//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants

//Function Prototype
/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    int num;//number of organisms
    float rate;//increase rate
    int day;//days
    int i;
    

    //Input Variables
    cout<<"Please enter the initial number of organisms: ";
    cin>>num;
    
    cout<<"Also, please enter increase rate in %: ";
    cin>>rate;
    
    cout<<"The days it will develope: ";
    cin>>day;
    //Loop
    
    cout<<setw(2)<<"Day"<<setw(25)<<"Number of Organisms"<<endl;
    if(num<2||day<1||rate<0)
    {
       cout<<"Not Good."<<endl; 
    }
    
    else
    {
        for(int i=0;i<=day;i++)
        {  
        num=num*(1+(rate/100));
        cout<<setw(2)<<i<<setw(13)<<num<<endl;
        }
                
    }        
    
    
    //Output the Results
    
    return 0;
}
    
    