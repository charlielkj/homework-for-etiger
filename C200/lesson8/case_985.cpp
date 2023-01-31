//
//  case_985.cpp
//  lesson
//
//  Created by 王斌军 on 2022/7/23.
//

#include <iostream>
#include <string>
using namespace std;
int main(){
    string input;
    string To_be_replaced;
    string replaced;
    getline(cin,input);
    cin>>To_be_replaced;
    cin>>replaced;
    input=" "+input+" ";
    To_be_replaced=" "+To_be_replaced+" ";
    int pos=input.find(To_be_replaced);
    if(pos!=-1){
        int end_pos=input.find(" ",pos+1);
        input.erase(pos+1,end_pos-pos-1);
        input.insert(pos+1,replaced);
    }
    input.erase(0,1);
    input.erase(input.size()-1,input.size());
    cout<<input<<endl;
    return 0;
}
