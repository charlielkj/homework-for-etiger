#include<iostream>
using namespace std;
int main(){
	int a,b,c;//定义a,b,c为整数型变量
	cin>>a>>b>>c; //输入整数型变量a，整数型变量b，整数型变量c 
	if(a>=b&&a>=c)//如果整数型变量a大于等于b ,且大于等于c 
		cout<<a;//输出a 
	else if(b>=a&&b>=c)//如果整数型变量b大于等于a ,且大于等于c 
		cout<<b;//输出b
	else if(c>=a&&c>=b)//如果整数型变量c大于等于a ,且大于等于b
		cout<<c;//输出c 
	return 0;	
} 


