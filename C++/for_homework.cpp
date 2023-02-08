/*
//#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void case_315()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)
            cout<<" ";
        for(int j=1;j<=i;j++)
            cout<<"#";
        for(int j=2;j<=i;j++)
            cout<<"#";
        cout<<endl;
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i-1;j++)
            cout<<" ";
        for(int j=1;j<=n+1-i;j++)
            cout<<"#";
        for(int j=n-1;j<=i-1;j++)
            cout<<" ";
        for(int j=2;j<=n+1-i;j++)
            cout<<"#";
        cout<<endl;
        
    }
}
void case_216(){
    long long input;
    cin>>input;
    cout<<input<<endl;
    int cntfor7=0,cntfor1=0,cntfor3=0,cntfor2=0;
    for(int i=0;i<19;i++){
        int number = input % 10;
        input/=10;
        if(number==7)
            cntfor7++;
        if(number==1)
            cntfor1++;
        if(number==2)
            cntfor2++;
        if(number==3)
            cntfor3++;
    }
    if(cntfor7>0&&cntfor1>0&&cntfor3>0&&cntfor2>0)
        cout<<"Yes"<<endl;
    else
        cout<<"NO"<<endl;
}
int case_218(){
    char input;
    int cnt=0;
    while(cin>>input)
    {
        cnt++;
    }
        
    cout<<cnt<<endl;
    return 0;
}
void case_217(){
    char input[19]={0};
    cin>>input;
    int cnt=0;
    for(int i=0;i<19;i++){
        if(input[i]=='6')
        {
            cout<<'6';
            cnt++;
        }
    }
    if(cnt>0)
    {
        cout<< endl;
    }
    else
    {
        cout<<"Unhappy"<<endl;
    }
}
/*
n=5
 
*//*
void case_954(){
    unsigned long long n,level[1000];
    //freopen("level.in","r",stdin);
    //freopen("level.out","w",stdout);
    cin>>n;
    level[0]=0;
    for(int i=1;i<=n;i++){
        level[i]=level[i-1]+i;
    }
    level[n-1]++;
    cout<<level[n-1]<<endl;
}

void case_741(){
    int n;
    unsigned long long race[109];
    const int MOD=1000007;
    cin>>n;
    race[1]=2;
    race[2]=3;
    for(int i=3;i<=n;i++){
        race[i]=race[i-1]+race[i-2];
    }
    cout<<race[n]%MOD<<endl;
}
int main()
{
	case_741();
    return 0;
}

*/
