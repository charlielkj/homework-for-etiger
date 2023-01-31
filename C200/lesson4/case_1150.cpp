//
//  case_1150.cpp
//  lesson
//
//  Created by 王斌军 on 2022/7/12.
//

#include <iostream>
using namespace std;
int main(){
    string mid,post;
    cin>>mid>>post;
    int length=mid.length();
    char root=post[length-1];
    int pos=mid.find(root);
    int left=pos;
    int right=length-left-1;
    cout<<root<<endl<<left<<" "<<right<<endl;
}
