//
//  24点.hpp
//  lesson
//
//  Created by WWT on 2022/4/20.
//

#ifndef _4__hpp
#define _4__hpp
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>
#include <time.h>
#include <cmath>
using namespace std;
void mainmenu(){
    cout<<"This game is called '24点'"<<endl;
    cout<<endl;
    cout<<"Game Rule"<<endl;
    cout<<"1.First,the players should have a player-number,the number shouldn't be more than 100"<<endl;
    cout<<"2.The computer will give you 4 numbers,use them to play 24点,then input the player-number of the player who wins"<<endl;
    cout<<"3.If the four number can't makes 24,then when the computer ask you to input the player-number which is the player who wins,input a number which is negetive"<<endl;
    cout<<endl<<endl;
    cout<<"You have to input what's the condition to win"<<endl;
    cout<<"Now you can input"<<endl;
}
void numbers(){
    int a,b,c,d;
    srand((unsigned)time(NULL));
    a=rand()%9;
    b=rand()%9;
    c=rand()%9;
    d=rand()%9;
    a++;b++;c++;d++;
    cout<<"The number is: "<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
}
bool scores(int score[],int aim){
    int num;
    cout<<"Who wins?"<<"Press your player number to tell me"<<endl;
    cin>>num;
    if(num>0){
        score[num-1]+=1;
        cout<<"Player "<<num<<"'s score is ";
        cout<<score[num-1]<<endl;
        if(score[num-1]>=aim){
            cout<<"Player "<<num<<" wins!"<<endl;
            return true;
        }
    }
    else
        cout<<"Nobody gets points"<<endl;
    
    return false;
}
#endif /* _4__hpp */

