#include<iostream>
#include<ctime> 
using namespace std;
void SLEEP(int x){ //延时x毫秒 
	clock_t now=clock(); 
	while(clock()-now<x); 
} 
int main(){
	cout<<"开始倒计时"<<endl; 
	int i=10; 
	while(i){
		cout<<i<<endl;
		SLEEP(1000); //延时1秒
		i--;
	}
	cout<<"编程真有趣！"<<endl;	
	return 0;
}



