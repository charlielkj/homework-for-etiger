//
//  case_1905.cpp
//  lesson
//
//  Created by 王斌军 on 2022/12/10.
//

#include <iostream>
using namespace std;
int ans[109][109];
int main()
{
    int num;
    //freopen("currency.in","r",stdin);
    //freopen("currency.out","w",stdout);
    cin >> num;
    int values[21] = {0};
    for (int i = 1; i <= num; i++)
    {
        cin >> values[i];
    }
    ans[0][0] = 1;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j <= 100; j++)
        {
            if (j < values[i])
            {
                ans[i][j] = ans[i - 1][j];
            }
            else
            {
                ans[i][j] = ans[i - 1][j] or ans[i - 1][j - values[i]];
            }
        }
    }
    int cnt = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (! ans[num][i])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
