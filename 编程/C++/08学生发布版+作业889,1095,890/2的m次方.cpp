#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b ;
	long long ans=1,i=1;
	while(i<=b){
		ans*=a;
		i++;
	}
	cout<<ans<<endl;
	return 0;
} 


