//
//  24点.cpp
//  lesson
//
//  Created by WWT on 2022/4/20.
//
#include <iostream>
#include "24点.hpp"
int score[30]={0};
using namespace std;
int main(){
    mainmenu();
    int aim;
    cin>>aim;
    bool iswin=false;
    while(!(iswin)){
        numbers();
        iswin=scores(score,aim);
    }
    return 0;
}



