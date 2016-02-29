
/* 
 * Author: Xin Xiang
 * Created on February 26, 2016, 10:46 AM
 * Purpose: Total Purchase
 */

//System Libraries
#include <iostream>

using namespace std;
//User Libraries
//Global Constants

//System Starts Here
int main(int argc, char** argv) {
    
    //Declare Variables
    
    //Items that a customer purchase
    float item_1= 15.95f;
    float item_2=24.95f;
    float item_3=6.95f;
    float item_4= 12.95f;
    float item_5= 3.95f;
    
    float salesTax = 0.07f; //The tax for the sales
    
    float subtotal_sale, amount_sale_tax, the_total;
    
    //The subtotal for sales
    subtotal_sale= item_1+item_2+item_3+item_4+item_5;
    
    //The amount of sale taxes
    amount_sale_tax= subtotal_sale*salesTax;
    
    //The total price
    the_total= subtotal_sale+amount_sale_tax;
    
    //Output the Results
    cout<<"The subtotal of the sale is "<<subtotal_sale<<"$"<<endl;
    cout<<"The amount of sales tax is "<<amount_sale_tax<<"$"<<endl;
    cout<<"The total is "<<the_total<<"$"<<endl;
    
    //Exit Stage Right
    
    
    

    return 0;
}

