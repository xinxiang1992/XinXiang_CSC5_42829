/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: xinxiang
 *
 * Created on March 23, 2016, 11:45 PM
 * Purpose: Areas of Rectangle
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Prototype Function

//Execution Starts here


int main(int argc, char** argv) {
    //Declare Variables
    float length1, width1, area1;
    float length2, width2, area2;
    
    
    //Input variables
    cout<<"Please enter the first length: ";
    cin>>length1;
    cout<<"Please enter the first width: ";
    cin>>width1;
    
    cout<<"Please enter the second length: ";
    cin>>length2;
    cout<<"Please enter the second width: ";
    cin>>width2;
    
    //Calculate the variables
    area1=(length1)*(width1);
    area2=(length2)*(width2);
    
    //Output Variables
    if(area1>area2)
    {
        cout<<"The rectangle of "<<length1<<" length and "<<width1
                <<" width are bigger "<<
                "than the rectangle of "<<length2<<" and "<<width2<<"."<<endl;
    }
    
    else if (area1==area2)
    {
        cout<<"Both rectangles have same area."<<endl;
    }
    
    else if (area1<area2)
    {
        cout<<"The rectangle of "<<length2<<" length and "<<width2
                <<" width are bigger "<<
                "than the rectangle of "<<length1<<" and "<<width1<<"."<<endl;
    }
    //Exit
        
    
   

    return 0;
}

