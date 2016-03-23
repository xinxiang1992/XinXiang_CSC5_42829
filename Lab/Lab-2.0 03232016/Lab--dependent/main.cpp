/* 
 * File:   main.cpp
 * Author: Xin Xiang
 *
 * Created on March 23, 2016, 10:36 AM
 * Purpose: Dependent
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
    
    //Input the Variables
    cout<<"The score you earn is: ";
    cin>>score;
    
    //Output the Variables
    if(score<60)
    {
        cout<<"The grade you earn is F.";
    }else if(score<70)
    {
        cout<<"The grade you earn is D.";
    }else if(score<80)
    {
        cout<<"The grade you earn is C.";
    }else if(score<90)
    {
        cout<<"The grade you earn is B.";
    }else if(score<=100)
    {
        cout<<"The grade you earn is A.";
    }else if(score<0||score>100)
    {
        cout<<"Please enter an valide score.";
    }


    return 0;
}

