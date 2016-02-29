/* 
 * Author: Xin Xiang
 * Created on February 24, 2016, 2:26 PM
 * Purpose: Average of Values
 */

//System Libraries
#include <iostream>

using namespace std;
//User Libraries
//Global Constants

//System starts here


int main(int argc, char** argv) {
    
    //Declare Variables
    int a=24, b=28, c=32, d=33, e=37;  //Five values which are given.
    
    int sum= a+b+c+d+e;  //Sum of five values.
    
    float average= sum/5;  //The average of five values.
    
    //Output the Results
    cout<<"The average of these five values are "<<average<<endl;
    //Exit Stage Right
    
    
    

    return 0;
}

