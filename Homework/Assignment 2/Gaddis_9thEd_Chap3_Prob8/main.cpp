/* 
 * File:   main.cpp
 * Author: Xin Xiang
 * Created on March 14, 2016, 1:42 PM
 * Purpose: How Many Widgets
 */

//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Prototype Functions 

//Execution Starts Here

int main(int argc, char** argv) {
    //Declare Variables
    float wi_weight=12.5;
    int amount;  //The number of widgets
    float palletW, totalW; //weight of pallet and total.
    
    //Input variables
    cout<<"Please enter the weight of pallet and total weight: "<<endl;
    cin>>palletW>>totalW;
    
    //Calculate the Variables
    amount=(totalW-palletW)/12.5;
    amount=amount+1;
    
    //Output the results
    cout<<"The number of widgets is "<<static_cast<int>(amount)<<endl;
    
    //Exit
    

    return 0;
}

