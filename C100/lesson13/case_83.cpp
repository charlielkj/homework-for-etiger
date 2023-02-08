//
//  case_83.cpp
//  lesson
//
//  Created by 王斌军 on 2022/6/4.
//
/*
#include <iostream>
using namespace std;
typedef long long lolo;
lolo mcd(lolo n1,lolo n2){
    return n2?mcd(n2,n1%n2):n1;
}

递归，辗转相除法
n2?mcd(n2,n1%n2):n1;
 n2==>x=y
 n1%n2==>r=x%y,y=r
 *//*
int main(){
    lolo in1,in2;
    cin>>in1>>in2;
    cout<<mcd(in1,in2)<<endl;
    return 0;
}
*/
