/* 
 * File:   main.cpp
 * Author: Xin Xiang
 *
 * Created on April 25, 2016, 9:47 AM
 * Purpose: Winning Division
 */

//System Libraries
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
float getsales(string);
void highest(float,float,float,float);
//Execution Starts Here

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float sale1,sale2,sale3,sale4;
    
    sale1=getsales("Northeast");
    sale2=getsales("Southeast");
    sale3=getsales("Northwest");
    sale4=getsales("Southwest");
    
    highest(sale1,sale2,sale3,sale4);
    

    return 0;
}

/*****************Input company's name and sales****************************/
float getsales(string company)
{
    float sales;
    cout<<"Please enter the company's name: "<<company<<" and its sales is "
            <<endl;
    cin>>sales;
    if(sales<0)
    {
        cout<<"Invalid Variables."<<endl;
    }
    else 
        return sales;
}

/*************************Highest Sales**********************************************/
void highest(float sale1,float sale2,float sale3,float sale4)
{
    if(sale1>sale2&&sale1>sale3&&sale1>sale4)
    {
        cout<<"The company of Northeast is highest with $"<<sale1<<"."<<endl;
    }
    else if(sale2>sale1&&sale2>sale3&&sale2>sale4)
    {
        cout<<"The company of Southeast is highest with $"<<sale2<<"."<<endl;
    }
    else if(sale3>sale1&&sale3>sale2&&sale3>sale4)
    {
        cout<<"The company of Northwest is highest with $"<<sale3<<"."<<endl;
    }
    else if(sale4>sale1&&sale4>sale2&&sale4>sale3)
    {
        cout<<"The company of Southwest is highest with $"<<sale4<<"."<<endl;
    }
    
}


