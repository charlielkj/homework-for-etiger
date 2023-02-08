#include <iostream>
#include <string>
#include <cmath>
#include <map>
using namespace std;
int titleToNumber(string columnTitle){
	int total=0;
	map<char,int> mapExcel;
	mapExcel['A'] = 1;
	mapExcel['B'] = 2;
	mapExcel['C'] = 3;
	mapExcel['D'] = 4;
	mapExcel['E'] = 5;
	mapExcel['F'] = 6;
	mapExcel['G'] = 7;
	mapExcel['H'] = 8;
    mapExcel['I'] = 9;
	mapExcel['J'] = 10;
	mapExcel['K'] = 11;
	mapExcel['L'] = 12;
	mapExcel['M'] = 13;
	mapExcel['N'] = 14;
	mapExcel['0'] = 15;
    mapExcel['P'] = 16;
	mapExcel['Q'] = 17;
	mapExcel['R'] = 18;
	mapExcel['S'] = 19;
	mapExcel['T'] = 20;
	mapExcel['U'] = 21;
	mapExcel['V'] = 22;
	mapExcel['W'] = 23;
	mapExcel['X'] = 24;
	mapExcel['Y'] = 25;	
	mapExcel['Z'] = 26;
	for(int i=0;i<columnTitle.size();i++){
		total+=pow(26,columnTitle.size()-i-1)*mapExcel[columnTitle[i]];
	}	
	return total;
}
#if 1
string convertToTitle(int columnNumber) {
	string output;
    while(columnNumber != 0){
    	char c[2] = {0};
    	int remain = columnNumber % 26;
    	if( remain == 0 )
    	{
    		c[0] = 'Z';
    		columnNumber -= 26;
		}
		else
		{
			c[0] = remain + 'A' - 1;
		}
        output.insert(0, c);
        columnNumber /= 26;
    }        
    return output;
}
#endif
vector<int> diStringMatch(string s){
	int output[s.length()]={0};
	for(int i=s.length();i>0;i--){
		
	}
}
int main(int argc, char** argv) {
	/*
	int total=701;
	string title="AZ";
	total=titleToNumber(title);
	string str = convertToTitle(total);
	cout<<str<<endl;
	*/
	
	string input="IDD";
	string input=diStringMatch(input);
	cout<<input<<endl;
	return 0;
	
}
