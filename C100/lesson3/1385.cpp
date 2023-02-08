#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
	freopen("comparison.in","r",stdin);
	freopen("comparison.out","w",stdout);
	char char1,char2;
	cin>>char1>>char2;
	if(char1>char2)
		cout<<char1<<">"<<char2<<endl;
	else if(char1<char2)
		cout<<char1<<"<"<<char2<<endl;
	else
		cout<<char1<<"="<<char2<<endl;
	return 0;
}
