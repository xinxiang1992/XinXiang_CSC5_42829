/* 
 * File:   main.cpp
 * Author: xin xiang
 *
 * Created on March 16, 2016, 9:08 AM
 * Purpose:dependent if's
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Varibales
    float payRate, hrsWrkd, payCheck;
    float overTime=40;//where overtime begins
    
    //Input Values
    cout<<"Input pay rate ($'s/hr) and Hour Worked both dd.dd format"<<endl;
    cin>>payRate>>hrsWrkd;
    
    if (hrsWrkd<=overTime) 
    {
        payCheck=hrsWrkd*payRate;
    }
    else if(hrsWrkd>overTime)
       {
       payCheck=hrsWrkd*payRate+(hrsWrkd-overTime)*payRate;
       }
    else
    {  
            payCheck=0;
    }
    
    cout<<"Paycheck = $"<<payCheck<<" for "
            <<hrsWrkd<<" hours @ $"<<payRate<<"/hr"<<endl;


    return 0;
}

