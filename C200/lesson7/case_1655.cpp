//
//  case_1655.cpp
//  lesson
//
//  Created by 王斌军 on 2022/7/19.
//

#include <iostream>
using namespace std;
struct guard{
    int pos,id;
};
guard guards[100009];
bool cmp(const guard&a,const guard&b){
    return a.pos<b.pos;
}

int main(){
    int n;
    int rk[100009];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>guards[i].pos;
        guards[i].id=i;
    }
    sort(guards+1,guards+n+1,cmp);
    for(int i=1;i<=n;i++)
        rk[guards[i].id]=i;
    for(int i=1;i<=n-1;i++)
        cout<<guards[i].pos<<" ";
    cout<<guards[n].pos<<endl;
    for(int i=1;i<=n-1;i++)
        cout<<guards[i].id<<" ";
    cout<<guards[n].id<<endl;
    for(int i=1;i<=n-1;i++)
        cout<<rk[i]<<" ";
    cout<<rk[n]<<endl;
    return 0;
}
