//
//  case_118.cpp
//  lesson
//
//  Created by WWT on 2022/6/4.
//
/*
#include <iostream>
using namespace std;
lolo mcd(lolo n1,lolo n2){
    return n2?mcd(n2,n1%n2):n1;
}
/*
递归，辗转相除法
n2?mcd(n2,n1%n2):n1;
 n2==>x=y
 n1%n2==>r=x%y,y=r
 */
/*
int main(){
    lolo in1,in2;
    cin>>in1>>in2;
    lolo mcdnum=mcd(in1,in2);
    //最小公倍数=两整数的乘积÷最大公约数
    lolo lcdnum=(in1*in2)/mcdnum;
    cout<<lcdnum<<endl;
    return 0;
}
*/
