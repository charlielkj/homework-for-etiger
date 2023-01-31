//
//  case_1149.cpp
//  lesson
//
//  Created by 王斌军 on 2022/7/12.
//

#include <iostream>
#include <string>
using namespace std;
int main(){
    string pre,mid;
    cin>>pre>>mid;
    char root=pre[0];
    int pos=mid.find(root);
    int length=pre.length();
    int left=pos;
    int right=length-left-1;
    cout<<root<<endl<<left<<" "<<right<<endl;
}
