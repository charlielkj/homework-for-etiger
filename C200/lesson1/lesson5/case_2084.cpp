//
//  case_2084.cpp
//  lesson
//
//  Created by 王斌军 on 2022/7/16.
//

#include <iostream>
#include <stack>
using namespace std;
stack<int> num;
//数字栈

stack<char> ope;
//符号栈

void solve(){
    while (!ope.empty()) {
        char op=ope.top();
        ope.pop();
        //获取符号
        
        int n2=num.top();
        num.pop();
        int n1=num.top();
        num.pop();
        //获取2个数字
        
        if(op=='+')
            n1+=n2;
        else
            n1-=n2;
        //加减
        
        num.push(n1);
        //把计算结果输入
        
    }
}
//做加减法

int main(){
    int num1,num2;
    char op;
    //freopen("calculator.in","r",stdin);
    //freopen("calculator.out","w",stdout);
    cin>>num1;
    num.push(num1);
    while (cin>>op>>num2) {
        if(op=='*'){
            num1=num.top();
            num.pop();
            num1*=num2;
            num.push(num1);
        }
        //如果是乘号，直接乘
        
        else{
            solve();
            ope.push(op);
            num.push(num2);
        }
        //加减号用自己写的solve()函数
        
    }
    solve();
    cout<<num.top()<<endl;
}
