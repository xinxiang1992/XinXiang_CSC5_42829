/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: xinxiang
 *
 * Created on April 25, 2016, 9:56 PM
 * Purpose: Coin Toss
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
int coin()
{
	int flip;
	flip=rand() % 2 + 1;
	if (flip == 1)
        {
            cout << "The flip was heads." << endl;
        }
        else
        {
            cout << "The flip was tails." << endl;
        }

	return flip;
}

//Execution Starts Here

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
	int count, face, heads = 0, tails = 0;
        int times;
        
        //Input values
        cout<<"Please input how many times you want to toss: ";
        cin>>times;
	
	// initialize the random number generator
    srand(static_cast<int>(time(0))); 
	
    // generate and count the number of heads and tails
	for (int count=1; count<=times; count++)
     {
        face=coin();
		if(face == 1) 
            heads++;
         else
            tails++;	       
     }

     cout << "The number flips: " <<times<< endl;
     cout << "The number of heads: " <<heads<<  endl;
     cout << "The number of tails: " <<tails<<  endl;
}