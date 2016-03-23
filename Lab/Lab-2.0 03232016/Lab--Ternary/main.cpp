/* 
 * File:   main.cpp
 * Author: Xin Xiang
 *
 * Created on March 23, 2016, 9:39 AM
 * Purpose:Ternary
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototype

//Execution Starts Here

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    int score; //The score you earn
    char grade;
    //Input Variables
    cout<<"Please enter the score you earn: ";
    cin>>score;
    
    //Map the outputs
    cout<<"The grade you earn is ";
    grade = (score<60)? 'F':
        (score>=60 && score<70)? 'D':
            (score>=70&&score<80)?'C':
                (score>=80&&score<90)?'B':
                    (score>=90&&score<=100)?'A':'0';
    cout << grade;
    
    

    return 0;
}

