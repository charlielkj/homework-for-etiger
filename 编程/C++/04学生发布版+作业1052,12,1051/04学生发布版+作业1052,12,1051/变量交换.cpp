#include<iostream> //使用输入输出流工具箱 
using namespace std; //使用标准的名字空间 
int main() {
	int a,b,x;  //创建变量啊a，b，x 
	cin>>a>>b;	//输入变量a，b 
	cout<<a<<" "<<b<<endl;  //输出变量a b 
	x=a; //把a里面的值，放到x里面 
	a=b; //把现在b里面的值，放到a里面去 
	b=x; //把x里面的值（已经是最早a里面的值了） 又赋值给b 
	cout<<a<<" "<<b<<endl; //输出变量a b 
	return 0;//主函数结束 
}


