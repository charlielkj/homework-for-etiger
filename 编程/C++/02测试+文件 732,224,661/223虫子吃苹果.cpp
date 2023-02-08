#include<bits/stdc++.h>
using namespace std;
int n;	
int x;		
int y;
int m;	
int ans;
int main(){
	cin>>n>>x>>m;
	y=n-x;
	ans=ceil(y*1.0/m);
	ans=max(ans,0);
	cout<<ans<<endl;
	return 0;
}




