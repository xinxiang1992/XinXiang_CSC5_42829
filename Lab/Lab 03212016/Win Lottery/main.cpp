/* 
 * File:   main.cpp
 * Author: Xin Xiang
 * Created on March 21, 2016, 9:39 AM
 * Purpose: Calculate how much we win from lottery
 */
//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants 

//Function Prototype

//Execution Starts Here

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variable
    float amount; //How much win before penalties
    float taxP=0.52f, lsP=0.62f, marrP=0.50f;//Penalties we have to pay
    float total; //The total we will have
    float num1,num2;
    
    //Input the Variables
    cout<<"You win this amount of lottery: ";
    cin>>amount;
    
    //Calculate Variables
    num1=amount-amount*taxP;
    num2=num1*(1-lsP);
    total=num2*(1-marrP);
    
    
    //Output the Results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"The total you win after all the penalties: "<<total
            <<" $."<<endl;
    
    
    //Exit
    
    return 0;
}

