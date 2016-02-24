/* 
 * File:   main.cpp
 * Author: Xin Xiang
 *
 * Created on February 24, 2016, 2:13 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float meal_cost, tax_percentage,tip_percentage;
    
    meal_cost= 88.67f;
    tax_percentage= 0.0675f;
    tip_percentage= 0.2f;
    
    float tax_amount= meal_cost*tax_percentage;
    
    float tip_amount= (tax_amount+meal_cost)*tip_percentage;
    
    float total_bill= tax_amount+tip_amount+meal_cost;
    
    cout<<"The meal cost is "<<meal_cost<<"$"<<endl;
    cout<<"The tax amount is "<<tax_amount<<"$"<<endl;
    cout<<"The tip amount is "<<tip_amount<<"$"<<endl;
    cout<<"The total bill is "<<total_bill<<"$"<<endl;
    

    return 0;
}

