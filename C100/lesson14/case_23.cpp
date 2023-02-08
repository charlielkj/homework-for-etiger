//
//  case_23.cpp
//  lesson
//
//  Created by 王斌军 on 2022/6/11.
//

#include <iostream>
using namespace std;
int top=0;
string input;
int main(){
    getline(cin,input);
    bool isMatch=1;
    for(int i=0;i<input.size();i++){
        if(input[i]=='(')
            ++top;
        else if(input[i]==')'){
            if(top==0){
                isMatch=0;
                break;
            }
            top--;
        }
    }
    if(top>0)
        isMatch=0;
    if(isMatch)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
