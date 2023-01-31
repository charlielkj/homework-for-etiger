//
//  case_104.cpp
//  lesson
//
//  Created by 王斌军 on 2022/7/21.
//

#include <iostream>
using namespace std;
int main(){
    string input;
    string output="";
    getline(cin,input);
    for(int i=0;i<input.size();i++){
        if(input[i]>='A'&&input[i]<='Z')
            output+=(input[i]+'a'-'A');
        else if(input[i]>='a'&&input[i]<='z')
            output+=(input[i]-'a'+'A');
        else
            output+=input[i];
    }
    cout<<output<<endl;
    return 0;
}
