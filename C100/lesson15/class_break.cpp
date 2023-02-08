//
//  break.cpp
//  lesson
//
//  Created by 王斌军 on 2022/6/18.
//

#include <iostream>
#include <string>
using namespace std;
int main(){
    string s="water";
    s+="melon";
    cout<<s<<endl;
    cout<<s.length()<<endl;
    cout<<s.substr(0,5)<<endl;
    cout<<s.substr(5)<<endl;
    s.erase(0,5);
    cout<<s<<endl;
    s="hami"+s;
    cout<<s<<endl;
}
//王闻天
