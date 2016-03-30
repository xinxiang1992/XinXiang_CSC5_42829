/* 
 * File:   main.cpp
 * Author:Xin Xiang
 *
 * Created on March 30, 2016, 8:37 AM
 * Purpose: Retirement_for
 */

#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float salary=6e4f;//$60,000
    float percDep=1e-1f;//10% to save each year
    float pv=0.0f;//present value 
    float iRate=0.05f;//interest rate
    int   nYears=0;//comparison of  calculation to the rule of 72
    float fv=pv;//future value
    float yrlyDep; //Yearly deposit in $'s
    float savRet;//savings to retire in $'s
    
    //calculate the approximate number years to double   by rule of 72
    savRet=salary/iRate;
    yrlyDep=salary*percDep;
    
    //loop each year until the future value is 2X the present value
    cout<<fixed<<setprecision(2)<<showpoint<<"Savings required to retire= $"<<savRet<<endl;
    cout<<"Yearly Deposit/Municipal bond purchase = $"<<yrlyDep<<endl;
    cout<<"Interest rate = "<<iRate*100<<"%"<<endl;
    cout<<"Years     Future Value."<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(3)<<nYears<<setw(10)<<" $"<<fv<<endl;
    
    for(nYears=1;fv<savRet;nYears++)
    {
        fv=fv*(1+iRate);//yearly interest rate calculation
        fv=fv+yrlyDep;//increment the number of years
        cout<<setw(3)<<nYears<<setw(10)<<" $"<<fv<<endl;
       
    }
    //output the result
    

    return 0;
}

