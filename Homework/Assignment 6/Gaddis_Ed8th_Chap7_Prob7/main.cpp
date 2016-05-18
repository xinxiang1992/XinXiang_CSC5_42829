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
    //Declare variables and array
  const int SIZE1=5;
    const int SIZE2=4;
    string stuname[SIZE1];
    char letter[SIZE1];
    float grade1[SIZE2];
    float grade2[SIZE2];
    float grade3[SIZE2];
    float grade4[SIZE2];
    float grade5[SIZE2];
    float average[SIZE1];
    float score,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,
          avg1,avg2,avg3,avg4,avg5;
    string name;
    
    //Ask for student's data and fill the arrays
    for(int i=0; i<SIZE1; i++){
        cout<<"Enter the student's name "<<endl;
        cin>>name;
        stuname[i]=name;
    }
    for(int j=0; j<SIZE2; j++){
        cout<<"Enter the score of test "<<j+1<<" for "<<stuname[0]<<endl;
        cin>>score;
        grade1[j]=score;
        sum1+=grade1[j];
    }
    avg1=sum1/SIZE2;
    average[0]=avg1;
    
    for(int j=0; j<SIZE2; j++){
        cout<<"Enter the score of test "<<j+1<<" for "<<stuname[1]<<endl;
        cin>>score;
        grade2[j]=score;
        sum2+=grade2[j];
    }
    avg2=sum2/SIZE2;
    average[1]=avg2;
    
    for(int j=0; j<SIZE2; j++){
        cout<<"Enter the score of test "<<j+1<<" for "<<stuname[2]<<endl;
        cin>>score;
        grade3[j]=score;
        sum3+=grade3[j];
    }
    avg3=sum3/SIZE2;
    average[2]=avg3;
    
    for(int j=0; j<SIZE2; j++){
        cout<<"Enter the score of test "<<j+1<<" for "<<stuname[3]<<endl;
        cin>>score;
        grade4[j]=score;
        sum4+=grade4[j]; 
    }
    avg4=sum4/SIZE2;
    average[3]=avg4;
        
    for(int j=0; j<SIZE2; j++){
        cout<<"Enter the score of test "<<j+1<<" for "<<stuname[4]<<endl;
        cin>>score;
        grade5[j]=score;
        sum5+=grade5[j];
    }
    avg5=sum5/SIZE2;
    average[4]=avg5;
    
    for(int i=0; i<SIZE1; i++){
        if(average[i]>=90&&average[i]<100) letter[i]='A';
        else if (average[i]>=80&&average[i]<90) letter[i]='B';
        else if (average[i]>=70&&average[i]<80) letter[i]='C';
        else if (average[i]>=60&&average[i]<70) letter[i]='D';
        else if (average[i]>=0&&average[i]<60) letter[i]='F';
    }
    
    //Output the result
    cout<<" Name        Average Score     Grade"<<endl;
    for(int i=0;i<SIZE1;i++){
        cout<<setw(5)<<stuname[i]<<setw(15)<<average[i];
        cout<<setw(14)<<letter[i]<<endl;
    }    
    cout<<endl;

    return 0;
}

