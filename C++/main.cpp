#include <bits/stdc++.h>
using namespace std;
int case_218(){
	char input;
	int cnt=0;
	while(cin>>input)
	{
		cnt++;
	}
		
	cout<<cnt<<endl;
	return 0;
}
int case_217(){
	char input[19]={0};
	cin>>input;
	int cnt=0;
	for(int i=0;i<19;i++){
		if(input[i]=='6')
		{
			cout<<'6';
			cnt++;
		}
	}
	if(cnt>0)
	{
		cout<< endl;
	}
	else
	{
		cout<<"Unhappy"<<endl;
	}
}
int case_216(){
	long long input;
	cin>>input;
	cout<<input<<endl;
	int cntfor7=0,cntfor1=0,cntfor3=0,cntfor2=0;
	for(int i=0;i<19;i++){
		int number = input % 10;
		input/=10;
		if(number==7)
			cntfor7++;
		if(number==1)
			cntfor1++;
		if(number==2)
			cntfor2++;
		if(number==3)
			cntfor3++;
	}
	if(cntfor7>0&&cntfor1>0&&cntfor3>0&&cntfor2>0)
		cout<<"Yes"<<endl;
	else
		cout<<"NO"<<endl;		
}

int main(int argc, char** argv) {
	case_216();
	return 0;
}
