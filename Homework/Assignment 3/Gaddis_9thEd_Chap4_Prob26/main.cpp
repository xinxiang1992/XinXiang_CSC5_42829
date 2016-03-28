/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: xinxiang
 *
 * Created on March 23, 2016, 11:45 PM
 * Purpose: Mobile Service Provider
 */
//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Prototype Function

//Execution Starts here


int main(int argc, char** argv) {
    //Declare Variables
    float mA=39.99,mB=59.99,mC=69.99;
    float cost;
    float min;//minutes
    float save_b,save_c,saveC;
    char choice;
   
    //Input variables
    cout<<"Please enter the package you chose: ";
    cin>>choice;
    //Calculate the variables
    switch(choice)
    {
        case 'a':
        case 'A': 
            cout<<"You chose Package A."<<endl;
            cout<<"Please enter the minutes you use: ";
            cin>>min;
        if(min<=450)
        {
            cost=mA;
            cout<<"The cost is "<<cost<<"$.";
        }
        else
        {
            cost=mA+0.45*(min-450);
            cout<<"Since you over use, the cost is "<<cost<<"$."<<endl;
            if(min<=494&&min>450)
            {
               cout<<"There is no saving."<<endl; 
            }
            else
            {
                save_b=cost-mB;
                save_c=cost-mC;
                cout<<"For you are using "<<min<<" mintues, Package B will be "
                        <<save_b<<"$ cheaper."<<endl;
                cout<<"For you are using "<<min<<" mintues, Package C will be "
                        <<save_c<<"$ cheaper."<<endl;
            }
        }
            break;
        
        case 'b':
        case 'B': 
            cout<<"You chose Package B."<<endl;
            cout<<"Please enter the minutes you use: ";
            cin>>min;
        if(min<=900)
        {
            cost=mB;
            cout<<"The cost is "<<cost<<"$.";
        }
        else
        {
            cost=mB+0.40*(min-900);
            cout<<"Since you over use, the cost is "<<cost<<"$.";
        }
            break;
            
        case 'c':
        case 'C': 
            cout<<"You chose Package C."<<endl;
            cost=mC;
            cout<<"You have unlimited minutes."<<endl;
            break;
        default:
            cout<<"Please enter an valid package."<<endl;
  
    }
    
    //Output Variables
    
                    
  
    //Exit
        
    
   

    return 0;
}

