#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
	freopen("roman.in","r",stdin);
	freopen("arabic.out","w",stdout);
	char s[100] = {0};
	cin>>s;
	map<char, int> mapRoman;
	mapRoman['I'] = 1;
    mapRoman['V'] = 5;
	mapRoman['X'] = 10;
	mapRoman['L'] = 50;
	mapRoman['C'] = 100;
	mapRoman['D'] = 500;
	mapRoman['M'] = 1000;	
	
	int total = 0;
	for(int i=0;i<strlen(s);i++){	
		total += mapRoman[s[i]];
		if(mapRoman[s[i]]<mapRoman[s[i+1]])
			total-=2*mapRoman[s[i]];
	}
	
	cout << total << endl;	
	return 0;
}
