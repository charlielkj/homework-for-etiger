#include<iostream>
using namespace std;
int f[1000];
int main(){
	int n=10;
//	cin>>n;
	for(int i=0;i<n;i++)//for循环,计数器i从0自加到n-1,共循环n次
		cin>>f[i];
	int sm=f[0];
	for(int i=1;i<n;i++)//for循环,计数器i从1自加到n-1,共循环n-1次
		if(f[i]<sm)
			sm=f[i];
	for(int i=0;i<n;i++)//for循环,计数器i从0自加到n-1,共循环n次
		if(f[i]!=sm)
			cout<<f[i]<<" "; 
	return 0;
} 


