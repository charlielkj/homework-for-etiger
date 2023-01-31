//
//  case_1906.cpp
//  lesson
//
//  Created by 王斌军 on 2022/12/17.
//

#include <iostream>
using namespace std;
int ans[59][10009];
int main()
{
    int amusements,time;
    cin >> amusements >> time;
    int taketime[59];
    for (int i = 1; i <= amusements; i++)
    {
        cin >> taketime[i];
    }
    ans[0][0] = 1;
    for (int i = 1; i <= amusements; i++)
    {
        for (int j = 0; j <= time; j++)
        {
            if (j < taketime[i])
            {
                ans[i][j] = ans[i - 1][j];
            }
            else
            {
                ans[i][j] = (ans[i - 1][j] + ans[i - 1][j - taketime[i]]) % 1000007;
            }
        }
    }
    int res = 0;
    for (int i = 0; i <= time; i++)
    {
        res = (res + ans[amusements][i]) % 1000007;
    }
    cout << res << endl;
}
