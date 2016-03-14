/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: xinxiang
 *
 * Created on March 13, 2016, 10:38 PM
 * Purpose: Test Average
 */

//System Variables
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants

//Prototype functions

//Execution Starts Here

int main(int argc, char** argv) {
    //Declare Variables
    
    //Socres that a student earn
    float score1, score2, score3, score4, score5;
    
    //Average of scores
    float average;
    
    cout<<"The first score is ";
    cin>>score1;
    
    cout<<"The second score is ";
    cin>>score2;
    
    cout<<"The third score is ";
    cin>>score3;
    
    cout<<"The forth score is ";
    cin>>score4;
    
    cout<<"The fifth score is ";
    cin>>score5;
    
    //Calculate the variables
    average=(score1+score2+score3+score4+score5)/5;
    
    cout<<fixed<<showpoint<<setprecision(1)<<
            "The average of the scores is "<<average<<endl;
    
    //Exit
    

    return 0;
}

