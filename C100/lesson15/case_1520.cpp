//
//  case_1520.cpp
//  lesson
//
//  Created by 王斌军 on 2022/6/18.
//

#include <iostream>
using namespace std;
int main(){
    string Find;
    string toFind;
    getline(cin,Find);
    getline(cin,toFind);
    Find=" "+Find+" ";
    toFind=" "+toFind+" ";
    int pos=Find.find(toFind);
    if(pos==-1)
        cout<<"sorry"<<endl;
    else
        cout<<pos+1<<endl;
    return 0;
}
