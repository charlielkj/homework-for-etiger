#include<iostream>
using namespace std;
const int N=109;
int n,a[N];
int main(){
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int big=a[0];
	for(int i=1;i<n;i++)
		if(a[i]>big)
			big=a[i];
	for(int i=0;i<n;i++) {
		if(a[i]==big)
			continue;
		cout<<a[i]<<" ";
	}
	return 0;
}



