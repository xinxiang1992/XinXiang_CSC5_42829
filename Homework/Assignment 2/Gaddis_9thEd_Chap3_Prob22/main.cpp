/* 
 * File:   main.cpp
 * Author: Xin Xiang
 * Created on March 14, 2016, 2:19 PM
 * Purpose: Angle Calculator
 */
//System Libraries

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants

//Prototype Functions

//Execution Starts Here

int main(int argc, char** argv) {
    //Declare Variables
    float angle; //The angle user types in
    float sine, cosine, tangent;
    double pi;
    
    //Input the Variables
    pi=4*atan(1);
    angle=angle*pi;
    cout<<"Please enter the angle: ";
    cin>>angle;
    
    //Calculate the Variables
    sine=sin(angle);
    cosine=cos(angle);
    tangent=tan(angle);
    
    //Output the Results
    cout<<fixed<<showpoint<<setprecision(4);
    cout<<"The sine of the angle "<<angle<<" is "<<sine<<endl;
    cout<<"The cosine of the angle "<<angle<<" is "<<cosine<<endl;
    cout<<"The tangent of the angle "<<angle<<" is "<<tangent<<endl;
    
    //Exit
    

    return 0;
}

