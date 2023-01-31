//
//  case_911.cpp
//  lesson
//
//  Created by 王斌军 on 2022/7/9.
//

#include <iostream>
using namespace std;
int main(){
    long long input;
    cin>>input;
    long long height=1;
    while(input>1){
        height++;
        input/=2;
    }
    cout<<height<<endl;
    return 0;
}
