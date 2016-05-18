/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: xinxiang
 *
 * Created on May 14, 2016, 10:50 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    //Initialize variables and the array
    int num;
    const int SIZE=10;
    int array[SIZE];
    
    //Fill the array
    for(int i=0; i<SIZE; i++){
       cout<<"Enter a value to fill the array"<<endl; 
       cin>>num;
       array[i]=num;
    }
    
    int temp1=array[0], temp2=array[0];
    for(int i=1;i<SIZE;i++){
        if(array[i]>temp1) temp1=array[i];
    } 
    for(int j=1;j<SIZE;j++){
        if(array[j]<temp2) temp2=array[j];
    }
    cout<<endl;
    cout<<"The largest in the array is "<<temp1<<endl;
    cout<<"The smallest in the array is "<<temp2<<endl;
    cout<<endl;
    
    return 0;
}

    


