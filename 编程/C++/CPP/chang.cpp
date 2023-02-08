#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double a,b,c,abc;
	cin>>a>>b>>c;
	abc=a*b*c;
    cout<<fixed<<setprecision(2)<<abc;
	return 0;
}
