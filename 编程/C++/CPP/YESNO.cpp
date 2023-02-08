#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) {
    double a,b,c;
    a=(-40-32)*5/9.00;
    b=(0-32)*5/9.00;
    c=(98.6-32)*5/9.00;
	cout<<fixed<<setprecision(2)<<a<<endl;
    cout<<fixed<<setprecision(2)<<b<<endl;
    cout<<fixed<<setprecision(2)<<c<<endl;
	return 0;
}
