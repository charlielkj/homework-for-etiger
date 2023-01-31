//
//  case_723.cpp
//  lesson
//
//  Created by 王斌军 on 2022/7/16.
//

#include <iostream>
using namespace std;
long long lowbit(long long num){
    return num&(-num);
}
int main(){
    long long num;
    cin>>num;
    cout<<lowbit(num)<<endl;
    return 0;
}
