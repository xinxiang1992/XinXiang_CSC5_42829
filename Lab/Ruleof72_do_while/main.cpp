/* 
 * File:   main.cpp
 * Author:Xin Xiang
 *
 * Created on March 28, 2016, 8:11 AM
 * Purpose: To illustrate rule of 72 by way of a do_while loop
 */

#include <iostream>
#include <iomanip>
using namespace std;
//user libraries

//global constants

//

/*
 * 
 */
int main(int argc, char** argv) {
    float pv=100.0f;//present value
    float   iRate=0.05f;//interest rate
    int nComp;//number of compounding periods by rule of 72
    int nYears;//comparison of  calculation to the rule of 72
    float fv=pv;//future value
    
    //calculate the approimate number years to double   by rule of 72
    nComp=static_cast<int>(0.72f/iRate);
    
    //loop each year untile the future value is 2X the present value
    cout<<"Years future value."<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<setw(3)<<nYears<<setw(10)<<" $"<<fv<<endl;
    
    do
    {
        fv=fv*(1+iRate);//yearly interest rate calculation
        nYears++;//increment the number of years
        cout<<setw(3)<<nYears<<setw(10)<<" $"<<fv<<endl;
       
     
    }while(fv<2*pv);
    
    //output the result
    cout<<"Present value = $"<<pv<<endl;
    cout<<"Interest rate = "<<iRate*100<<"%"<<endl;
    cout<<"By the rule of 72 it will take "<<nComp<<" years to double."<<endl;
    cout<<"The future value = $"<<setw(10)<<fv<<endl;
    cout<<"The number of years to more than double = "<<nYears<<endl;
    
            

    return 0;
}

