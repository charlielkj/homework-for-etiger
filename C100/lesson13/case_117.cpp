//
//  case_117.cpp
//  lesson
//
//  Created by 王斌军 on 2022/6/4.
//
/*
#include <iostream>
using namespace std;
int catalan(int n){
    if (n==1||n==2)return 1;
    int res=0;
    for (int i=1;i<=n-1;i++){
        res+=catalan(i)*catalan(n-i);
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    cout<<catalan(n+1)<<endl;
    return 0;
}*/
/*
#include<iostream>
using namespace std;
typedef long long ll;
ll Catalan(ll n)
{
    return n==1?1:Catalan(n-1)*(4*n-2)/(n+1);
}

 int main()
 {
     ll input;
     cin>>input;
     cout<<Catalan(input)<<endl;
     return 0;
 }


*/
