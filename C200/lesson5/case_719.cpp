//
//  case_719.cpp
//  lesson
//
//  Created by 王斌军 on 2022/7/16.
//

#include <iostream>
using namespace std;
int main(){
    long long num;
    int cnt1=0,cnt0=0;
    cin>>num;
    while(num){
        //当num全部都是0时，结束;
        if(num&1)
            cnt1++;
        //num&1 ==> 1&1=1,0&1=0;
        
        else
            cnt0++;
        //不是1就是0;
        
        num>>=1;
        //将统计过的数去掉，所有数往后移动一位，首位添个0;
        //eg:1010110 ==> 0101011
        //最后会变成0000000，循环结束;
        
    }
    cout<<cnt1+cnt0<<" "<<cnt1<<" "<<cnt0<<endl;
}
