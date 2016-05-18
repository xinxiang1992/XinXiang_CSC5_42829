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
#include <cstdlib>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare variables and array
    void filAray(char [],int);
    void prntAry(const char [],int,int);
    int grade(char [],char [],char [],int);


    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    const int SIZE=20;
    char qstns[SIZE], answrs[SIZE], rhtwrg[SIZE];
    
    //Initialize the array

    filAray(qstns,SIZE);
    filAray(answrs,SIZE);
    
    //Grade the test
    int score = grade(qstns,answrs,rhtwrg,SIZE);
    
    //output the initial array
    cout<<"The Test Question Solutions"<<endl;
    prntAry(qstns,SIZE,5);
    cout<<"The Test Question Answers"<<endl;
    prntAry(answrs,SIZE,5);
    cout<<"The Score received "<<endl;
    prntAry(rhtwrg,SIZE,5);
    cout<<"Your result were "<<score<<" out of "<<SIZE<<endl;
    cout<<endl;

    return 0;
    
}    
    /***************************************************************
 *                        Score the Test                         *
 * *************************************************************
 * Purpose: To print a character array with any number of columns
 * Input:
 *    n->The size of the array
 *    a-> The answer Array
 *    q-> The question array
 * Output:
 *    c-> The score Array
 *    score->The total amount 
 */
int grade(char q[],char a[],char c[],int n){
    //Declare the count
    int score=0;
    //Grade each answer
    for(int i=0;i<n;i++){
        if(q[i]==a[i]){
            c[i]='c';
            score++;
        }else c[i]='i';
    }
    return score;
}

/***************************************************************
 *                        Print Array                          *
 * *************************************************************
 * Purpose: To print a character array with any number of columns
 * Input:
 *    n->The size of the array
 *    a-> The float Array
 *    nCols->Number of Columns to display array
 * Output:
 *    On Screen
 */
void prntAry(const char a[],int n,int nCols){
    //Format
    cout<<fixed<<showpoint<<setprecision(4);
    //Separate output with a line
    cout<<endl;
    //Loop and output every element in the array
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        //When column is reached go to next line
        if((i%nCols)==(nCols-1))cout<<endl;
    }
    //Separate output with a line
    cout<<endl;
}

/***************************************************************
 *                        Fill Array                           *
 * *************************************************************
 * Purpose: To fill an array with a,b,c,d
 * Input:
 *    n->The size of the array
 * Input-Output
 *    a-> The character Array
 * Output:
 */
void filAray(char a[],int n){
    //Loop on every element and equate to 2 digits
    for(int i=0;i<n;i++){
        a[i]=rand()%4+97;//[a,b,c,d];
    }
}



