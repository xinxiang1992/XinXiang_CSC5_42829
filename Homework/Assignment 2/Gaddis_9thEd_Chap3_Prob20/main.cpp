/* 
 * File:   main.cpp
 * Author: Xin Xiang
 *
 * Created on March 14, 2016, 1:58 PM
 * Purpose:Pizzas Pi
 */

//System Libraries
#include <iostream>
#include <cmath>

using namespace std;
//User Libraries

//Global Constants

//Prototypes Functions

//Execution Starts Here

int main(int argc, char** argv) {
    //Declare Variables
    float numP, diameter, r; //The number of pizzas and diameter and radius
    float area; //The area of the pizza
    float slice=14.125;  //One slice of pizza area
    const float pi=3.14159;
    
    //Input the Variables
    cin>>diameter;
    cout<<"The diameter of the pizza is "<<diameter<<" inches."<<endl;
    
    
    //Calculate the Variables
    r=diameter/2;
    numP=(pi*r*r)/slice;
    numP=numP+1;
    
    //Output the results
    cout<<"The number of slices is "<<static_cast<int>(numP)
            <<" inches."<<endl;
    
    //Exit
       
    

    return 0;
}

