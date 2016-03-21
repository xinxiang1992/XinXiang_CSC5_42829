/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 16, 2016, 8:55 AM
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
    
    if (hrsWrkd<=overTime) payCheck=hrsWrkd*payRate;
    if(hrsWrkd>overTime) payCheck=hrsWrkd*payRate+(hrsWrkd-overTime)*payRate;
    
    
    cout<<"Paycheck = $"<<payCheck<<" for "
            <<hrsWrkd<<" hours @ $"<<payRate<<"/hr"<<endl;

    return 0;
}

