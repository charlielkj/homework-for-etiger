//
//  case_197.cpp
//  lesson
//
//  Created by 王斌军 on 2022/6/25.
//

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n1,n2,inp;
    cin>>inp;
    int best=10000;
    for(int i=1;i<=99;i++){
        for(int j=i+1;j<=100;j++){
            int temp=abs(i*j-inp);
            if(temp<best){
                best=temp;
                n1=i;n2=j;
            }
            
        }
    }
    cout<<n1<<"*"<<n2<<"="<<n1*n2<<endl;
}
