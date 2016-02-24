/* 
 * File:   main.cpp
 * Author: Xin Xiang
 *
 * Created on February 24, 2016, 2:32 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float pay_amount= 2200.0; //the amount of pay.
    
    unsigned int pay_periods= 26;  //the periods of pay.
    
    float annualPay= pay_amount*pay_periods;  //the annual pay.
    
    //the output of the annualPay.
    cout<<"The annual pay is "<<annualPay<<"$"<<endl;

    return 0;
}

