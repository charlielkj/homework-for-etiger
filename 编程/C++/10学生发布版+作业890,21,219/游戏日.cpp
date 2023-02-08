#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,min_ab,min_cd,min_all;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	min_ab=min(a,b);
	min_cd=min(c,d);
	min_all=min(min_ab,min_cd);
	cout<<min_all;
	return 0;
}
