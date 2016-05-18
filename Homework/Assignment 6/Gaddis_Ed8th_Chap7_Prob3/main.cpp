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
   const int SIZE=5;
    string name[SIZE]={"mild", "medium", "sweet", "hot", "zesty"};
    int sold[SIZE];
    int num,sum=0,pos1,pos2;
    
    //Fill the sold array
    for(int i=0;i<SIZE;i++){
        cout<<"Enter number of jars sold during the past month for ";
        cout<<name[i]<<" type:"<<endl;
        cin>>num;
        while(num<0){
            cout<<"Invalid input!"<<endl;
            i--;
            break;
        }
        sold[i]=num;
        sum+=sold[i];
    }
    
    //Output the report
    cout<<"  Type       Number of sold"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<setw(6)<<name[i]<<setw(15)<<sold[i]<<endl;
    }
    cout<<"The total sales is "<<sum<<endl;
    
    //Find the highest and lowest amount
    int temp1=sold[0], temp2=sold[0];
    for(int i=1;i<SIZE;i++){
        if(temp1<sold[i]) temp1=sold[i];
        if(temp2>sold[i]) temp2=sold[i];
    } 
    
    //Locate the position of highest and lowest
    for(int i=0; i<SIZE; i++){
        //Report back if found
        if(sold[i]==temp1) pos1=i;
    }
    for(int i=0; i<SIZE; i++){
        //Report back if found
        if(sold[i]==temp2) pos2=i;
    }
    cout<<"The highest selling is "<<name[pos1]<<endl;
    cout<<"The lowest selling is "<<name[pos2]<<endl;
    cout<<endl;

    return 0;
}

