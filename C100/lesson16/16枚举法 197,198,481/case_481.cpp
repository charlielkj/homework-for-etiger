//
//  case_481.cpp
//  lesson
//
//  Created by 王斌军 on 2022/6/27.
//

#include <iostream>
using namespace std;
int quiz[109];
bool isSUM(int x,int n){
    for(int i=1;i<=n-1;i++){
        for(int j=i+1;j<=n;j++){
            if(quiz[i]+quiz[j]==x)
                return true;
        }
    }
    return false;
}

int main(){
    int n=0;
    int cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>quiz[i];
    }
    for(int k=1;k<=n;k++){
        if(isSUM(quiz[k],n))
            cnt++;
    }
    cout<<cnt<<endl;
}
