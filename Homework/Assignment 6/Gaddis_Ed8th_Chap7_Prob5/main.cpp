/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: xinxiang
 *
 * Created on May 14, 2016, 10:54 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   const int SIZE=7;
    int empID[SIZE]={5658845,4520125,7895122,8777541,
                     8451277,1302850,7580489};
    int hours[SIZE];
    float payRate[SIZE];
    float wages[SIZE];
    float hour;
    float rate;
    
    //Ask the employee's data and calculate their wages
    for(int i=0; i<SIZE; i++){
        cout<<"Enter the working hour for "<<empID[i]<<endl;
        cin>>hour;
        cout<<"Enter the pay rate for "<<empID[i]<<endl;
        cin>>rate;
        while(rate<6){
            cout<<"Invalid input!"<<endl;
            i--;
            break;
            }
    
        //Fill the arrays
        hours[i]=hour;
        payRate[i]=rate;
        wages[i]=hour*rate;
    }
    
    //Output result
    cout<<endl;
    cout<<"Employee ID      Gross Wage"<<endl;
    for(int i=0; i<SIZE; i++){
        cout<<setw(9)<<empID[i]<<setw(15)<<wages[i]<<endl;
    }
    cout<<endl;
    return 0;
}

