//
//  test.cpp
//  lesson
//
//  Created by 王斌军 on 2022/7/9.
//

#include <iostream>
#include <cmath>
using namespace std;
long long power_2(int deep){
    long long res=1;
    for(int i=0;i<deep;i++){
        res*=2;
    }
    return res;
}
int main(){
    int depth;
    cin>>depth;
    if(depth!=64){
        unsigned long long most_node=power_2(depth)-1;
        cout<<most_node<<" "<<depth<<endl;
    }
    else{
        cout<<"18446744073709551615 "<<depth<<endl;
    }
    return 0;
}
