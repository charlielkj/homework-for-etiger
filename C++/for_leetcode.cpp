#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
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

bool isPalindrome(int x) {
    if(x<0)
        return false;
    int number[10]={0};
    int cnt=0;
    while(x>0)
    {
        number[cnt]=x%10;
        cout<<number[cnt]<<endl;
        x/=10;
        cout<<x<<endl;
        cnt++;
    }
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++)
    {
        if(number[i]!=number[cnt-i-1])
            return false;
    }
    return true;
}
bool isValid(string s) {
    map<char,int> P;
    //P=Parentheses
    P['('] = 1;
    P[')'] = 6;
    P['['] = 5;
    P[']'] = 4;
    P['{'] = 3;
    P['}'] = 4;
    int temp1=0,temp2=0;
    for(int i=0;i<=s.length();i++){
        temp1=P[s[i]];
        cout<<"temp1:"<<temp1<<endl;
        temp2=P[s[i+1]];
        cout<<"temp2:"<<temp2<<endl;
        if(temp2>temp1)
            return false;
    }
    return true;
 
 }
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> output;
    vector<int> empty = {};
    output.push_back(empty);
    for(int i = 0; i < nums.size(); i++)
    {
        vector<int> temp = {};
        temp.push_back(nums[i]);
        output.push_back(temp);
    }
    return output;
   }
int maxSubArray(vector<int>& nums) {
    int sum=0;
    int temp;
    if(nums.size()==1){
        sum=nums[0];
        return sum;
    }
    for(int i=0;i<nums.size();i++){
        temp=0;
        temp+=nums[i-1];
        for(int j=i+1;j<nums.size();j++){
            temp+=nums[j];
            if(temp>sum)
                sum=temp;
        }
    }
    return sum;
}


int main(int argc, char** argv) {
    //bool output;
    //string P="{()}";
    //output=isValid(P);
    //vector<int> input = {0};
    //cout<<subsets(input).size()<<endl;
    int output=0;
    vector<int> input={-2,1};
    output=maxSubArray(input);
    cout<<output;
    return 0;
    
}
