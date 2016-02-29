/* 
 * Author: Xin Xiang
 * Created on February 24, 2016, 1:42 PM
 * Purpose: Sales Tax
 */

//System Libraries

#include <iostream>

using namespace std;
//User Libraries
//Global Constants

//System starts here

int main(int argc, char** argv) {
    //Declare Variables
    
    int purchase= 95;  //The total purchase.
    
    float state_tax= 0.04f;  //The state sale tax.
    
    float county_tax= 0.02f;  //The county sale tax.
    
    float total_tax= purchase*state_tax+purchase*county_tax;  //The total sale tax under whole purchase.
    
    //Output the results
    cout<< "The total tax of the purchase is "<<total_tax<<"$"<<endl;
    
    //Exit stage right
    return 0;
}

