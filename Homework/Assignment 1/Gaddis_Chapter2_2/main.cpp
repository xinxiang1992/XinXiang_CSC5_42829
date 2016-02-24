/* 
 * File:   Gaddis_Chapter2_2.cpp
 * Author: Xin Xiang
 *
 * Created on February 24, 2016, 1:33 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float percentage= 0.58f; //Percentage of the total sales.
    
    float total= 8.6e9f;  //Total that company makes.
    
    float net= percentage*total; //Net that company has.
    
    cout<<"The net that East Coast Company makes is "<<net<<"$"<<endl;
    return 0;
}


