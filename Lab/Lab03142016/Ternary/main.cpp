/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 14, 2016, 9:42 AM
 * Purpose: Ternary
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants

//Prototype Functions

//Execution Starts Here

int main(int argc, char** argv) {
    //Declare Variables
    bool x,y;
    
    //Output the results
    cout<<"Truth Table\n."<<endl;
    cout<<"x  y  !x  !y  x&&y  x||y  x^y  x^y^y  x^y^x  !(x&&y)  ";
    cout<<"!x||!y  !(x||y)  !x&&!y"<<endl;
    
    //Row 1
    x=true, y=true;
    cout<<(x?'T':'F');
    cout<<setw(3)<<(y?'T':'F');
    cout<<setw(4)<<(!x?'T':'F');
    cout<<setw(4)<<(!y?'T':'F');
    cout<<setw(4)<<(x&&y?'T':'F');
    cout<<setw(6)<<(x||y?'T':'F');
    cout<<setw(6)<<(x^y?'T':'F');
    cout<<setw(6)<<(x^y^y?'T':'F');
    cout<<setw(6)<<(x^y^x?'T':'F');
    cout<<setw(9)<<(!(x&&y)?'T':'F');
    cout<<setw(9)<<(!x||!y?'T':'F');
    cout<<setw(8)<<(!(x||y)?'T':'F');
    cout<<setw(8)<<(!x&&!y?'T':'F')<<endl;
    
    //Row 2
    x=true, y=false;
    cout<<(x?'T':'F');
    cout<<setw(3)<<(y?'T':'F');
    cout<<setw(4)<<(!x?'T':'F');
    cout<<setw(4)<<(!y?'T':'F');
    cout<<setw(4)<<(x&&y?'T':'F');
    cout<<setw(6)<<(x||y?'T':'F');
    cout<<setw(6)<<(x^y?'T':'F');
    cout<<setw(6)<<(x^y^y?'T':'F');
    cout<<setw(6)<<(x^y^x?'T':'F');
    cout<<setw(9)<<(!(x&&y)?'T':'F');
    cout<<setw(9)<<(!x||!y?'T':'F');
    cout<<setw(8)<<(!(x||y)?'T':'F');
    cout<<setw(8)<<(!x&&!y?'T':'F')<<endl;
    
    //Row 3
    x=false, y=true;
    cout<<(x?'T':'F');
    cout<<setw(3)<<(y?'T':'F');
    cout<<setw(4)<<(!x?'T':'F');
    cout<<setw(4)<<(!y?'T':'F');
    cout<<setw(4)<<(x&&y?'T':'F');
    cout<<setw(6)<<(x||y?'T':'F');
    cout<<setw(6)<<(x^y?'T':'F');
    cout<<setw(6)<<(x^y^y?'T':'F');
    cout<<setw(6)<<(x^y^x?'T':'F');
    cout<<setw(9)<<(!(x&&y)?'T':'F');
    cout<<setw(9)<<(!x||!y?'T':'F');
    cout<<setw(8)<<(!(x||y)?'T':'F');
    cout<<setw(8)<<(!x&&!y?'T':'F')<<endl;
    
    //Row 4
    x=false, y=false;
    cout<<(x?'T':'F');
    cout<<setw(3)<<(y?'T':'F');
    cout<<setw(4)<<(!x?'T':'F');
    cout<<setw(4)<<(!y?'T':'F');
    cout<<setw(4)<<(x&&y?'T':'F');
    cout<<setw(6)<<(x||y?'T':'F');
    cout<<setw(6)<<(x^y?'T':'F');
    cout<<setw(6)<<(x^y^y?'T':'F');
    cout<<setw(6)<<(x^y^x?'T':'F');
    cout<<setw(9)<<(!(x&&y)?'T':'F');
    cout<<setw(9)<<(!x||!y?'T':'F');
    cout<<setw(8)<<(!(x||y)?'T':'F');
    cout<<setw(8)<<(!x&&!y?'T':'F')<<endl;
    
    //Exit Stage
    
    
  
    return 0;
}

