/* 
 * Author: Xin Xiang
 * Created on February 24, 2016, 2:32 PM
 * Purpose: Annual Pay
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries
//Global Constants

//System Starts here

int main(int argc, char** argv) {
    
    //Declare Variables
    float pay_amount= 2200.0; //the amount of pay.
    
    unsigned int pay_periods= 26;  //the periods of pay.
    
    float annualPay= pay_amount*pay_periods;  //the annual pay.
    
    //The output of the annualPay.
    cout<<"The annual pay is "<<annualPay<<"$"<<endl;
//Exit Stage Right
    return 0;
}

