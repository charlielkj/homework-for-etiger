#include<bits/stdc++.h>
using namespace std;
int main() {
	//freopen("ceasar.in","r",stdin);
	//freopen("ceasar.out","w",stdout);
	char input[100] = {0};
	int index = 0;
	int total = 0;
	while(cin.getline(input, 100) > 0)
	{
		cout<<input<<endl;
		if(input[index]!=' ')
		{
			total++;
		}
			
		index++;
	}
	cout<<total<<endl;	
	return 0;
}

