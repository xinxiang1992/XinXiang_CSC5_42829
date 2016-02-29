/* 
 * Author: Xin Xiang
 * Created on February 24, 2016, 2:13 PM
 * Purpose: Restaurant Bill
 */

//System Libraries
#include <iostream>

using namespace std;
//User Libraries
//Global Constants

//System stars here


int main(int argc, char** argv) {
    
    //Declare Variables
    float meal_cost; //The total cost of the meal
    float tax_percentage;//The percentage of the taxes
    float tip_percentage;//The percentage of the tips
    
    meal_cost= 88.67f;
    tax_percentage= 0.0675f;
    tip_percentage= 0.2f;
    
    float tax_amount= meal_cost*tax_percentage;//The amount of taxes
    
    //The amount of the tips
    float tip_amount= (tax_amount+meal_cost)*tip_percentage;
    
    //The total bill of the meal
    float total_bill= tax_amount+tip_amount+meal_cost;
    
    //Output the results
    cout<<"The meal cost is "<<meal_cost<<"$"<<endl;
    cout<<"The tax amount is "<<tax_amount<<"$"<<endl;
    cout<<"The tip amount is "<<tip_amount<<"$"<<endl;
    cout<<"The total bill is "<<total_bill<<"$"<<endl;
    
    //Exit Stage Right

    return 0;
}

