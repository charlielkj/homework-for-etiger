#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double a,b,c;
	cin>>a>>b;
	c=a+b; 
	c/=2;
    cout<<fixed<<setprecision(1)<<c;
	return 0;
}
