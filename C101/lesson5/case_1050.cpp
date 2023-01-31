//
//  case_1050.cpp
//  lesson
//
//  Created by 王斌军 on 2022/11/5.
//

#include <iostream>
using namespace std;
int height[1009];
int defenser[1009];
int main()
{
    long long planes;
    //freopen("towerdefense.in","r",stdin);
    //freopen("towerdefense.out","w",stdout);
    cin >> planes;
    for (int i = 0; i < planes; i++)
    {
        cin >> height[i];
    }
    int cnt = 0;
    for (int i = 0,j; i < planes; i++)
    {
        for (j = 0; j < cnt; j++)
        {
            if (defenser[j] > height[i])
            {
                break;
            }
        }
        defenser[j] = height[i];
        if (j == cnt)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
/*
 #include<iostream>
 using namespace std;
 long long t,n[10000]={},ans=0,d[10000]={},cnt=0;
 int main(){
    freopen("towerdefense.in","r",stdin);
    freopen("towerdefense.out","w",stdout);
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n[i];
    }
    for(int i=0,j;i<t;i++){
        for(j=0;j<cnt;j++){
            if(d[j]>n[i]) break;
        }
        d[j]=n[i];
        if(j==cnt) cnt++;
    }
    cout<<cnt;
    return 0;
 }
 */
