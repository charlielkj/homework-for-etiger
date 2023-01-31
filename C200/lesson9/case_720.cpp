//
//  case_720.cpp
//  lesson
//
//  Created by 王斌军 on 2022/7/23.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    string input;
    cin>>input;
    double ans=0;
    int i;
    for(i=0;i<input.size();i++){
        if(input[i]=='.')
            break;
        ans*=2;
        if(input[i]=='1')
            ans++;
    }
    if(input[i+1]=='1')
        ans+=0.5;
    if(input[i+2]=='1')
        ans+=0.25;
    if(input[i+3]=='1')
        ans+=0.125;
    cout<<fixed<<setprecision(3)<<ans<<endl;
}

