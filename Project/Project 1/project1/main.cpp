/* 
 * File:   main.cpp
 * Author: Xin Xiang
 *
 * Created on April 28, 2016, 1:15 PM
 * Purpose: Project 1
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants

//Function Prototype
int boss1(int,int);
void bossfight(int,int);
void boss2fight(int,int);

//Execution Starts Here
/*
 * 
 */
int main(int argc, char** argv) {
    //Set up random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    cout<<"Welcome To Your Journey."<<endl;
    cout<<endl<<endl;
    
    char a;//choice that you are going to make
    cout<<"Start or not?? Press any keys to start. "<<
            "Press N or n to quit."<<endl;
    
    //Input "no" choice
    cin>>a;
    if(a=='n'||a=='N')
    {
        cout<<"Game Over!!!"<<endl;
        return 0;
    }
    
    //Introduction to the character
    cout<<"Your Initial Condition: "<<endl; 
    
    //Declare Variables;
    int hp=500,mp=50;//Health Pool, Mana Pool, Experience Pool
    
    //output initial condition of character
    cout<<"HP: "<<hp<<setw(4)<<"   MP: "<<mp<<"    Basic Damage: 55-60."<<endl;
    
    boss1(hp,mp);
    return 0;
}

/**************************Make choice to fight or not*************************/
int boss1(int a,int b)
{
    char choice;
    cout<<"You met a boss. You want to fight or not."
            <<" Press n to escape, Press y to fight."<<endl;
    cin>>choice;
    //Make decision to fight with boss or not
    switch(choice)
    {
        case 'Y':
        case 'y': bossfight(a,b);break;
        
        case 'N':
        case 'n': 
        {
            cout<<"You decide to choose a small path to avoid the boss, ";
            cout<<"but you die because of spike trap."<<endl;break;
        }
    }
    return a,b;
}

/********************Start to fight with the first boss************************/
void bossfight(int c,int d)
{
    //c is character's HP, d is character's MP
    
    int bossHP=500;//Boss's initial HP
    
    while(bossHP>0&&c>0)
    {
        //Character's round to hit boss
        cout<<"You just hit the boss."<<endl;
        
        int damCha=rand()%6+55;//Character's random damage
        bossHP=bossHP-damCha;//Boss's hp left
        
        cout<<"You just made "<<damCha<<" on the boss."<<endl;
        
        //Boss' round to hit character
        cout<<"Boss Hit you."<<endl;
        int damBos=rand()%6+25;//Boss's random damage
        c=c-damBos;//Character's hp left
        cout<<"Boss just made "<<damBos<<" damage."<<endl;
        cout<<"Character's current HP is "<<c<<endl;
        cout<<endl<<endl;
    }
    bool x;
    if(c>0) x=true;
    if(x==true) cout<<"You defeated Boss."<<endl;
    char de;
    cout<<"Do you want to continue?"<<endl;
    cin>>de;
    if(de=='y'||de=='Y')
    {
       //Second Boss Fight
    boss2fight(c,d);  
    }
    else
    {
        cout<<"Game Over. You Haven't Finished Your Journey."<<endl;
    }
    
   
    
}

/************************Second Boss Fight************************************/
void boss2fight(int c,int d)
{
    cout<<"After a long travel, you meet a another Boss, Roshan."<<endl<<endl;
    cout<<"The Battle Begins."<<endl;
    int roshanHP=2000;//Roshan's Basic HP
    int i=1;//Character only can use once of HP flask.
    int j=1;//Character only once of ultima spell
    //HP flask taking
    while(roshanHP>0&&c>0)
    {
        //Have HP Flask
        while(c<=150&&i<2)
        {
              
                char deci;//make the decision to take hp flask or not
                cout<<"Warning!! Your HP is too low, have HP Flask?"<<endl;
                cout<<"Press Y to use. Press N to ignore."<<endl;
                cin>>deci;
                if(deci=='y'||deci=='Y')
                {
                    c=500;
                    cout<<"Your HP is full Now."<<endl;
                }
                i++;
            
        }
        
        //Character's round to hit boss
        cout<<"You just hit the Roshan."<<endl;
        
        int damCha=rand()%6+55;//Character's random damage
        roshanHP=roshanHP-damCha;//Boss's hp left
        
        cout<<"You just made "<<damCha<<" on the Roshan."<<endl;
        
        //Roshan' round to hit character
        cout<<"Roshan Hit you."<<endl;
        int damBos=rand()%6+25;//Roshan's random damage
        c=c-damBos;//Character's hp left
        cout<<"Roshan just made "<<damBos<<" damage."<<endl;
        cout<<"Character's current HP is "<<c<<endl;
        
        cout<<endl<<endl;
        
         //Mana flask 
        while(c<80&&j<2)
        {
            cout<<"Roshan is invincible. Want to use Death Finger (Only Once for Life Time."<<endl;
            char deci;
            cout<<"Press Y to use. Press N to ignore."<<endl;
            cin>>deci;
            if(deci=='Y'||deci=='y')
            {
                cout<<"You made 1000 damage."<<endl;
                roshanHP=roshanHP-1000;
            }
            j++;
        }
    }
    bool x;
    if(c>0) x=true;
    if(x==true) cout<<"You defeated Boss."<<endl;
    else cout<<"You have been Defeated."<<endl;
    
    
}