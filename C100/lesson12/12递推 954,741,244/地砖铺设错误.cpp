/*#include<bits/stdc++.h>
using namespace std;
const int N=100009;
const int MOD=1000007;
long long n,f[N];
int main(){
	cin>>n;
	f[1]=1; 
	f[2]=2; 
	for(int i=3;i<=n;i++)
		f[i]=f[i-1]+f[i-2];
	cout<<f[n]%MOD<<endl;
	return 0;
}


#include<iostream>
using namespace std;
unsigned long long n,f[100];
int main(){
    cin>>n;
    f[1]=1;
    f[2]=2;
    for(int i=3;i<=n;i++)
        f[i]=f[i-1]+f[i-2];
    for(int i=0;i<=n;i++)
        cout<<i<<": "<<f[i]<<endl;
    return 0;
}*/
/*
#include <iostream>
//#include<bits/stdc++.h>
using namespace std;
//freopen("level.in","r",stdin);
//freopen("level.out","w",stdout);
long long n;
long long a[51];
int main(){
    cin>>n;
    a[1]=1;
    a[2]=2;
    a[3]=4;
    for(int i=4;i<=n;i++){
        a[i]=a[i-1]+a[i-2]+a[i-3];
    }
    cout<<a[n];
    return 0;
}
*/
