#include<iostream>
#define N 10009
using namespace std;
int n,x,d[N];
int main(){
	cin>>n;
	for(int i=0;i<n;i++)//for循环,计数器i从0自加到n-1,共循环n次
	cin>>d[i];
	int cnt=0;
	for(int i=0;i<n;i++)//for循环,计数器i从0自加到n-1,共循环n次
		if(x>d[i])
			cnt++;
	cout<<cnt<<endl;
	return 0;
} 


