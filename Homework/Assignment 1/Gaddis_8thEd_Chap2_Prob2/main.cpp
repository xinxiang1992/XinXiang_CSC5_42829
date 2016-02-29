/* 
 * Author: Xin Xiang
 * Created on February 24, 2016, 1:33 PM
 * Purpose: Sales Prediction
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global constants

//System starts here
int main(int argc, char** argv) {
    //Declare Variables
    
    float percentage= 0.58f; //Percentage of the total sales.
    
    float total= 8.6e9f;  //Total that company makes.
    
    float net= percentage*total; //Net that company has.
    
    //Output the results
    cout<<"The net that East Coast Company makes is "<<net<<"$"<<endl;
    
    //Exit stage right
    return 0;
}


