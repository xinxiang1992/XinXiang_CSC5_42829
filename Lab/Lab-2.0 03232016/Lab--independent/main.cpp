/* 
 * File:   main.cpp
 * Author: Xin Xiang
 *
 * Created on March 23, 2016, 10:30 AM
 * Purpose:Independent
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Prototype Functions

//Execution Starts Here

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    int score;
    
    //Input Variables
    cout<<"Please enter the score you earn: ";
    cin>>score;
    
    //Output the Variables
    if(score<60) cout<<"The grade you earn is F.";
        if(score<70) cout<<"The grade you earn is D.";
        if(score<80) cout<<"The grade you earn is C.";
        if(score<90) cout<<"The grade you earn is B.";
        if(score<=100) cout<<"The grade you earn is A.";

    //Exit Right Stage



    

    return 0;
}

