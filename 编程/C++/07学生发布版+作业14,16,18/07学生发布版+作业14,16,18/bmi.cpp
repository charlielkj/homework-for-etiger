#include<iostream>
using namespace std;
int main() {
	double w,h,bmi;
	cout<<"Input your weight(kilogram)."<<endl;
	cin>>w;
	cout<<"Input your height(meter)."<<endl;
	cin>>h;
	bmi=w/(h*h);
	cout<<"Your BMI is "<<bmi<<endl; 
	if (bmi<=18.5)
		cout<<"You are thin.";
	else if (bmi>18.5 && bmi<=24) 
		cout<<"You are normal.";
	else if (bmi>24 && bmi<=28) 
		cout<<"You are a bit fat.";
	else if (bmi>28 && bmi<=32) 
		cout<<"You are fat.";
	else 
		cout<<"You are so fat.";
	return 0;
} 


