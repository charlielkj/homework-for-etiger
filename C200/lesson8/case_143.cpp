//
//  case_143.cpp
//  lesson
//
//  Created by 王斌军 on 2022/7/23.
//

#include <iostream>
using namespace std;
int main(){
    string input;
    //freopen("isbn.in","r",stdin);
    //freopen("isbn.out","w",stdout);
    cin>>input;
    int coefficient=1;
    int sum=0;
    for(int i=0;i<input.size()-2;i++){
        if(i!=1&&i!=5){
            sum+=coefficient*(input[i]-'0');
            coefficient++;
        }
    }
    int id_code=sum%11;
    char code='X';
    if(id_code<10)
        code=id_code+'0';
    if(input[12]==code)
        cout<<"Right"<<endl;
    else
        cout<<input.substr(0,12)<<code<<endl;
    
    return 0;
}
