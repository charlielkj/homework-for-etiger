//
//  case_1582.cpp
//  lesson
//
//  Created by 王斌军 on 2022/11/26.
//

#include <iostream>
using namespace std;
int main()
{
    int len;
    cin >> len;
    string formula;
    int parentheses[109];
    getline(cin, formula);
    getline(cin, formula);
    for (int i = 0; i < len; i++)
    {
        if (formula[i] == '(')
        {
            parentheses[i + 1] = 1;
        }
        else if (formula[i] == ')')
        {
            parentheses[i + 1] = -1;
        }
        else
        {
            parentheses[i + 1] = 0;
        }
    }
    int ans[109] = {0};
    for (int i = 1; i <= len; i++)
    {
        ans[i] = ans[i - 1] + parentheses[i];
    }
    for (int i = 1; i <= len; i++)
    {
        if (parentheses[i] == 0)
        {
            cout << ans[i] << " ";
        }
    }
}
