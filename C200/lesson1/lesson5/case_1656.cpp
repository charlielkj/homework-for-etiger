//
//  case_1656.cpp
//  lesson
//
//  Created by 王斌军 on 2022/7/21.
//

#include <iostream>
using namespace std;
int score[100009];
int id[100009];
int rk[100009];
bool cmp(const int&a,const int&b){
    return score[a]>score[b];
}
int main(){
    int n;
    freopen("rank.in","r",stdin);
    freopen("rank.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>score[i];
        id[i]=i;
    }
    sort(id+1,id+n+1,cmp);
    for(int i=1;i<=n;i++)
        rk[id[i]]=i;
    for(int i=1;i<=n-1;i++){
        if(score[id[i]]==score[id[i+1]])
            rk[id[i+1]]=rk[id[i]];
    }
    for(int i=1;i<=n;i++)
        cout<<rk[i]<<" ";
    return 0;
}
