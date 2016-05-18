/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: xinxiang
 *
 * Created on May 14, 2016, 10:54 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    const int ROW=7,COL=3;
    int monkey[ROW][COL];
    int tot1=0, tot2=0, tot3=0, 
        tot4=0,food,largest=0,smallest=0;
    
    //Fill the array
    //Loop to fill the array
    for(int col=1; col<=COL; col++){
        for(int row=1; row<=ROW; row++){
            cout<<"Enter the food eaten by monkey No."<<col;
            cout<<" on day "<<row<<endl;
            cin>>food;
            while(food<0){
            cout<<"Invalid input!"<<endl;
            row--;
            break;
            }
            monkey[row-1][col-1]=food;
            tot1+=monkey[row-1][col-1];
        }
    }    
    
    //Calculate total food eaten by each kind of monkey
    for(int col=1; col<2;col++){
        for(int row=1;row<=ROW;row++){
            tot2+=monkey[row-1][col-1];
        }
    }  
    for(int col=2; col<3;col++){
        for(int row=1;row<=ROW;row++){
            tot3+=monkey[row-1][col-1];
        }
    }
    for(int col=3; col<4; col++){
        for(int row=1;row<=ROW;row++){
            tot4+=monkey[row-1][col-1];
        }
    }
    
    if(tot2>tot3&&tot2>tot4){
        largest=tot2;
    }else if(tot3>tot2&&tot3>tot4){
        largest=tot3;
    }else if(tot4>tot2&&tot4>tot3){
        largest=tot4;
    }else{};
    
    if(tot2<=tot3&&tot2<=tot4){
        smallest=tot2;
    }else if(tot3<=tot2&&tot3<=tot4){
        smallest=tot3;
    }else if(tot4<=tot2&&tot4<=tot3){
        smallest=tot4;
    }else{};
    
    //Output the result
    cout<<"Average amount of food eaten per day by ";
    cout<<"the whole family of monkeys is "<<tot1/ROW<<endl;
    cout<<"The least amount of food eaten during ";
    cout<<"the week by any one monkey is "<<smallest<<endl;
    cout<<"The greatest amount of food eaten during ";
    cout<<"the week by any one monkey is "<<largest<<endl;
    cout<<endl;
    return 0;
}

