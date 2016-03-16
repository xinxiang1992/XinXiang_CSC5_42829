/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 16, 2016, 12:11 PM
 */

#include <iostream>
#include <string>
using namespace std;


int main(int argc, char** argv) {
    string a,b,c;
    cout<<"Enter: "<<endl;
    cin>>a;
    cout<<"Enter: "<<endl;
    cin>>b;
    cout<<"Enter: "<<endl;
    cin>>c;
  
    if(a[0]<=b[0]&&a[0]<=c[0])
    {
        if(b[0]<=c[0])
        {
            cout<<a<<" "<<b<<" "<<c<<endl;
        }else cout<<a<<" "<<c<<" "<<b<<endl;
    }
    
    else if (b[0]<=a[0]&&b[0]<=c[0])
    {
        if(a[0]<=c[0])
        {
            cout<<b<<" "<<a<<" "<<c<<endl;
        }else cout<<b<<" "<<c<<" "<<a<<endl;
    }
    
    else if (c[0]<=a[0]&&c[0]<=b[0])
    {
        if (a[0]<=b[0])
        {
            cout<<c<<" "<<a<<" "<<b<<endl;
        }else cout<<c<<" "<<b<<" "<<a<<endl;
    }
    

    return 0;
}

