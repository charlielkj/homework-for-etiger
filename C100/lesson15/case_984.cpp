//
//  case_984.cpp
//  lesson
//
//  Created by 王斌军 on 2022/6/18.
//

#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    string idnum;
    getline(cin,name);
    getline(cin,idnum);
    string year=idnum.substr(6,4);
    cout<<name<<" was born in "<<year<<"."<<endl;
    return 0;
}
