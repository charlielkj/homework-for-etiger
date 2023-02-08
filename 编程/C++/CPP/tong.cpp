#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<iomanip>
using namespace std;
int main(){
    int cnt=0; 
	for(int i=0;i<1000000;i++){
	//srand((unsigned)time(NULL));
    i = rand()%400;
	if(i>362 && i<372){
		int j=1;
		double temperature = (double)i / 10;
		cout<<"DAY"<<" "<<j<<":";
		cout<<fixed<<setprecision(1)<<temperature<<" "<<endl;
		cnt++; 
		j++;
		}
	if(cnt>=10)
		break; 
	}
	
	
	/*for(int i=0;i<=9;i++){//for循环,计数器i从0自增到9,共循环i+1次
		cin>>s[i];
	}
	for(int i=9;i>=0;i--){//for循环,计数器i从9自减到0,共循环i+1次
		cout<<s[i]<<endl;
	}*/
	return 0;
} 
//for循环,计数器o,共循环b+1次





	
