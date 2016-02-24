/* 
 * File:   main.cpp
 * Author: Xin Xiang
 *
 * Created on February 24, 2016, 2:39 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float five, seven, ten;   //the years after current ocean level.
    
    float rising_rate=1.5; //the rate of rising ocean level.
    
    five=rising_rate*5;
    seven=rising_rate*7;
    ten=rising_rate*10;
    cout<<"The ocean level after 5 years is "<<five<<" millimeters"<<endl;
    cout<<"The ocean level after 7 years is "<<seven<<" millimeters"<<endl;
    cout<<"The ocean level after 10 years is "<<ten<<" millimeters"<<endl;
    

    return 0;
}

