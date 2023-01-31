//
//  case_1583.cpp
//  lesson
//
//  Created by 王斌军 on 2022/11/26.
//

#include <iostream>
using namespace std;
int field[1009][1009];
int sum[1009][1009];
int main()
{
    int num;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            cin >> field[i][j];
        }
    }
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            sum[i][j] = field[i][j] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
        }
    }
    int ans = INT_MIN;
    int plans;
    cin >> plans;
    int a,b,c,d;
    for (int i = 1; i <= plans; i++)
    {
        cin >> a >> b >> c >> d;
        int cnt = sum[c][d] - sum[c][b - 1] - sum[a - 1][d] + sum[a - 1][b - 1];
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}
