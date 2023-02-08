#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("bridge.in","r",stdin);
	//freopen("bridge.out","w",stdout);
	double L,u,v;
	cin>>L>>u>>v;
	double t=L*1.0/(u+v)*2;
	double ans=100-t;
	if(ans<=0.00){
		ans=0.00;
	}
	else if(ans>=100.00){
		ans=100.00;
	}
	cout<<fixed<<setprecision(2)<<ans<<endl;
	return 0;
}


