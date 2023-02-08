#include <bits/stdc++.h>
#include <iostream>
int main(int argc, char** argv) {
	freopen("calculation.in","r",stdin);
	freopen("calculation.out","w",stdout);
	long long a,b,ans;
	char op;
	cin>>a>>op>>b;
	if(op=='+')
		ans=a+b;
	else if(op=='-')
		ans=a-b;
	else
		ans=a*b;
	cout<<ans<<endl;
	return 0;
}
