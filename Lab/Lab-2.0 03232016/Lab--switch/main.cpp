/* 
 * File:   main.cpp
 * Author: Xin Xiang
 *
 * Created on March 23, 2016, 10:09 AM
 * Purpose: Switch
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
    
    //Output variables
    switch(score<60)
    {
        case true: cout<<"The grade you earn is F.";break;
        default:
            switch(score<70){
                case true: cout<<"The grade you earn is D.";break;
                default:
                    switch(score<80){
                        case true: cout<<"The grade you earn is C.";break;
                        default:
                        switch(score<90){
                            case true: cout<<"The grade you earn is B.";break;
                            default:
                                switch(score<=100){
                                    case true:cout<<"The grade you earn is A.";break;
                                    default: cout<<"Please an valide score.";
                                }
                        }
                    }
            }
    }
        
    
    return 0;
}

