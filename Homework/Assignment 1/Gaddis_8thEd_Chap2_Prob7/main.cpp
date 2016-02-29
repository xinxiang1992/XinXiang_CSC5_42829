/* 
 * Author: Xin Xiang
 * Created on February 24, 2016, 2:39 PM
 * Purpose: Ocean Levels
 */

//System Libraries
#include <iostream>

using namespace std;
//User Libraries
//Global Constants

//System Starts Here
int main(int argc, char** argv) {
    
    //Declare Variables
    float five, seven, ten;   //the years after current ocean level.
    
    float rising_rate=1.5; //the rate of rising ocean level.
    
    five=rising_rate*5; //The ocean level after five years
    seven=rising_rate*7;//The ocean level after seven years
    ten=rising_rate*10;//The oceablevel after ten years
    
    //Output of Results
    cout<<"The ocean level after 5 years is "<<five<<" millimeters"<<endl;
    cout<<"The ocean level after 7 years is "<<seven<<" millimeters"<<endl;
    cout<<"The ocean level after 10 years is "<<ten<<" millimeters"<<endl;
    
    //Exit Stage Right
    

    return 0;
}

