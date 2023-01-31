//
//  case_325.cpp
//  lesson
//
//  Created by 王斌军 on 2022/11/19.
//

#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    string text;
    string rules;
    getline(cin, text);
    getline(cin, rules);
    map<char, char> code;
    int length = rules.size();
    code[rules[length - 1]] = rules[0];
    //freopen("encryption.in","r",stdin);
    //freopen("encryption.out","w",stdout);
    for (int i = 0; i <= length - 2; i++)
    {
        code[rules[i]] = rules[i + 1];
    }
    for (int i = 0; i < text.size(); i++)
    {
        if (code.count(text[i]))
        {
            cout << code[text[i]];
        }
        else
        {
            cout << text[i];
        }
    }
    return 0;
}
