//
//  case_311.cpp
//  lesson
//
//  Created by 王斌军 on 2022/12/3.
//

#include <iostream>
using namespace std;
long long map[6][6];
long long coins[6][6];
const int INF = 100;
int main()
{
    freopen("fee.in","r",stdin);
    freopen("fee.out","w",stdout);
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            char input;
            cin >> input;
            if (input == '*')
            {
                map[i][j] = -1;
            }
            else
            {
                map[i][j] = input - '0';
            }
        }
    }
    for (int i = 0; i <= 5; i++)
    {
        coins[i][0] = -INF;
    }
    for (int i = 0; i <= 5; i++)
    {
        coins[0][i] = -INF;
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == 1 && j == 1)
            {
                coins[i][j] = map[i][j];
            }
            else
            {
                coins[i][j] = max(coins[i - 1][j], coins[i][j - 1]) + map[i][j];
            }
        }
    }
    cout << coins[5][5] << endl;
    return 0;
}
