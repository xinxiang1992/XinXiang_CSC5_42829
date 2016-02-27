/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: xinxiang
 *
 * Created on February 26, 2016, 10:46 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float item_1= 15.95f, item_2=24.95f, item_3=6.95f;  //items that a customer purchase.
    
    float item_4= 12.95f, item_5= 3.95f;
    
    float salesTax = 0.07f; 
    
    float subtotal_sale, amount_sale_tax, the_total;
    
    subtotal_sale= item_1+item_2+item_3+item_4+item_5;
    
    amount_sale_tax= subtotal_sale*salesTax;
    
    the_total= subtotal_sale+amount_sale_tax;
    
    cout<<"The subtotal of the sale is "<<subtotal_sale<<"$"<<endl;
    cout<<"The amount of sales tax is "<<amount_sale_tax<<"$"<<endl;
    cout<<"The total is "<<the_total<<"$"<<endl;
    
    
    
    

    return 0;
}

