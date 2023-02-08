//
//  case_726.cpp
//  lesson
//
//  Created by 王斌军 on 2022/6/11.
//

#include <iostream>
using namespace std;
const int N=10009;
int top=0;//栈顶
int stk[N];//栈
int cnt=1;
void push(int inp){//入栈
    if(top==N-1)
        cout<<"Overflow"<<endl;
    else{
        stk[++top]=inp;
        cnt++;
    }
}
void pop(){//出栈
    if(top==0)
        cout<<"Underflow"<<endl;
    else{
        cout<<stk[top]<<" ";
        top--;
    }
}
bool empty(){//判断空栈
    return top==0;
}
int size(){//求栈的元素数量
    return top;
}
int getTop(){//读取栈顶元素
    return stk[top];
}
int main(){
    int num;
    cin>>num;
    string con;
    for(int i=0;i<2*num;i++){
        cin>>con;
        if(con=="push")
            push(cnt);
        else
            pop();
            
        
    }
    return 0;
}
