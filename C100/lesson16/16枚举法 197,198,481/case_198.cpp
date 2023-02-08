//
//  case_198.cpp
//  lesson
//
//  Created by 王斌军 on 2022/6/25.
//

#include <iostream>
using namespace std;
int main(){
    double mc;//molecule
    double dm;//denominator
    int Lar,bmc,bdm;
    cin>>mc>>dm>>Lar;
    double radio=mc/dm;
    double best=Lar;
    for(int i=1;i<=Lar;i++){
        for(int j=1;j<=Lar;j++){
            double temp=i*1.0/j-radio;
            if(temp>=0 && temp<best){
                best=temp;bmc=i;bdm=j;
            }
        }
    }
    cout<<bmc<<" "<<bdm<<endl;
}
