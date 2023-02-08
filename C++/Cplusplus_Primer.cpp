#include <iostream>
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	vector <int> wwt;
	string test;
	for(int i=0;i<10;i++)
		test.push_back('a' + i);  
		
    cout<<test<<endl;
#if 0	
	for(int i=0;i<10;i++)
		wwt.push_back(i);
	for(int i=0;i<10;i++){
		cout<<wwt[i]<<" ";
		
	}
#endif
	return 0;
}
