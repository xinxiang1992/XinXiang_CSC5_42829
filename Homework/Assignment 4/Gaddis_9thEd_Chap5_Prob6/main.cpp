/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: xinxiang
 *
 * Created on April 3, 2016, 10:11 PM
 * Purpose: Hotel Occupancy
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants

//Prototype functions 

//Execution Starts Here

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    int floor;
    int room_e;//rooms for each floor
    int room_t=0;//total rooms in the hotel
    int room_to;//total occupied rooms
    int room_o;//room which are occupied
    int room_u;//room which are not occupied
    int room_tu;//total unoccupied rooms
    float perc;
    int i;
    //Input Variables
    cout<<"How many floors the hotel has? ";
    cin>>floor;

    //Output Results
    for(i=1;i<=floor;i++)
    {
        if(i==13)
        {
            cout<<"Sorry, no Thirteenth Floor."<<endl;
        }
        else
        {
            cout<<"How many rooms on the floor "<<i<<" ?"<<endl;
            cin>>room_e;
            cout<<"How many rooms are occupied? ";
            cin>>room_o;
                room_t=room_t+room_e;
                room_to=room_to+room_o;
                room_u=room_t-room_to;
                room_tu=room_tu+room_u;
            
            
        }
    }
    perc=static_cast<float>(room_to)/room_t;
    cout<<"This hotel has "<<room_t<<" rooms."<<endl;
    cout<<"There are "<<room_to<<" occupied rooms."<<endl;
    cout<<"The occupation rate is "<<(perc*100)<<"%"<<endl;
    return 0;
}

