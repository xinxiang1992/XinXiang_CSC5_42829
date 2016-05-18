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

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables and array
    float rain, sum=0, avg;
    unsigned short place1,place2;
    const int SIZE=12;
    float rainfal[SIZE];
    
    //Fill the rainfal array
    for(int i=0; i<SIZE; i++){
       cout<<"Enter the rainfall value"<<endl; 
       cin>>rain;
       while(rain<0){
            cout<<"Invalid input!"<<endl;
            i--;
            break;
        }
       rainfal[i]=rain;
       sum+=rainfal[i];
    }
    
    //Calculate the average rainfall
    avg=sum/SIZE;
    
    //Find the highest and lowest amount
    int temp1=rainfal[0], temp2=rainfal[0];
    for(int i=1;i<SIZE;i++){
        if(temp1<rainfal[i]) temp1=rainfal[i];
        if(temp2>rainfal[i]) temp2=rainfal[i];
    } 
    
    //Locate the position of highest and lowest
    for(int i=0; i<SIZE; i++){
        //Report back if found
        if(rainfal[i]==temp1) place1=i;
    }
    for(int i=0; i<SIZE; i++){
        //Report back if found
        if(rainfal[i]==temp2) place2=i;
    }
    
    //Output the result
    cout<<temp1<<"  "<<temp2<<endl;
    cout<<"The total rainfall for the year is "<<sum<<endl;
    cout<<"The monthly average rainfall is "<<avg<<endl;
    cout<<"The month with highest amount of rainfall is "<<place1+1<<endl;
    cout<<"The month with lowest amount of rainfall is "<<place2+1<<endl;
    cout<<endl;
    
    return 0;
}

