/* 
 * File:   main.cpp
 * Author: Xin Xiang
 *
 * Created on March 21, 2016, 10:12 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants

//Function Prototype 

//Execution Starts Here

/*
 * 
 */
int main(int argc, char** argv) {
    //Delcare Variable
    bool x,y;
    
    //Input Varibales
    cout<<"x  y  !x  !y  x&&y  x||y  x^y  x^y^y  "<<
            "x^y^x  !(x&&y)  !x||!y  !(x||y)  !x&&!y"<<endl;
    
    x=true;y=true;
    cout<<(x?'T':'F');
    cout<<setw(3)<<(y?'T':'F');
    cout<<setw(4)<<(!x?'T':'F');
    cout<<setw(4)<<(!y?'T':'F');
    cout<<setw(5)<<(x&&y?'T':'F');
    cout<<setw(5)<<(x||y?'T':'F');
    cout<<setw(6)<<(x^y?'T':'F');
    cout<<setw(6)<<(x^y^y?'T':'F');
    cout<<setw(7)<<(x^y^x?'T':'F');
    cout<<setw(8)<<(!(x&&y)?'T':'F');
    cout<<setw(9)<<(!x||!y?'T':'F');
    cout<<setw(8)<<(!(x||y)?'T':'F');
    cout<<setw(8)<<(!x&&!y?'T':'F')<<endl;
    
    x=true; y=false;
    cout<<(x?'T':'F');
    cout<<setw(3)<<(y?'T':'F');
    cout<<setw(4)<<(!x?'T':'F');
    cout<<setw(4)<<(!y?'T':'F');
    cout<<setw(5)<<(x&&y?'T':'F');
    cout<<setw(5)<<(x||y?'T':'F');
    cout<<setw(6)<<(x^y?'T':'F');
    cout<<setw(6)<<(x^y^y?'T':'F');
    cout<<setw(7)<<(x^y^x?'T':'F');
    cout<<setw(8)<<(!(x&&y)?'T':'F');
    cout<<setw(9)<<(!x||!y?'T':'F');
    cout<<setw(8)<<(!(x||y)?'T':'F');
    cout<<setw(8)<<(!x&&!y?'T':'F')<<endl;
    
    x=false; y=true;
    cout<<(x?'T':'F');
    cout<<setw(3)<<(y?'T':'F');
    cout<<setw(4)<<(!x?'T':'F');
    cout<<setw(4)<<(!y?'T':'F');
    cout<<setw(5)<<(x&&y?'T':'F');
    cout<<setw(5)<<(x||y?'T':'F');
    cout<<setw(6)<<(x^y?'T':'F');
    cout<<setw(6)<<(x^y^y?'T':'F');
    cout<<setw(7)<<(x^y^x?'T':'F');
    cout<<setw(8)<<(!(x&&y)?'T':'F');
    cout<<setw(9)<<(!x||!y?'T':'F');
    cout<<setw(8)<<(!(x||y)?'T':'F');
    cout<<setw(8)<<(!x&&!y?'T':'F')<<endl;
    
    x=false; y=false;
    cout<<(x?'T':'F');
    cout<<setw(3)<<(y?'T':'F');
    cout<<setw(4)<<(!x?'T':'F');
    cout<<setw(4)<<(!y?'T':'F');
    cout<<setw(5)<<(x&&y?'T':'F');
    cout<<setw(5)<<(x||y?'T':'F');
    cout<<setw(6)<<(x^y?'T':'F');
    cout<<setw(6)<<(x^y^y?'T':'F');
    cout<<setw(7)<<(x^y^x?'T':'F');
    cout<<setw(8)<<(!(x&&y)?'T':'F');
    cout<<setw(9)<<(!x||!y?'T':'F');
    cout<<setw(8)<<(!(x||y)?'T':'F');
    cout<<setw(8)<<(!x&&!y?'T':'F')<<endl;
    
    
    
    
    
    
    
    
    

    return 0;
}

