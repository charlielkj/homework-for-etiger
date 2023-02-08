#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("bridge.in","r",stdin);
	freopen("bridge.out","w",stdout);
	double L,u,v;
	cin>>L>>u>>v;
	double t=L/(u+v)*2;
	double ans=100-t;
	cout<<fixed<<setprecision(2)<<ans<<endl;
	return 0;
}


