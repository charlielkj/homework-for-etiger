//
//  case_1098.cpp
//  lesson
//
//  Created by 王斌军 on 2022/12/17.
//

#include <iostream>
using namespace std;
int ans[29][1009];
int main()
{
    int n;
    cin >> n;
    int weight[29];
    for (int i = 1; i <= n; i++)
    {
        cin >> weight[i];
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += weight[i];
    }
    int half = sum / 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= half; j++)
        {
            if (j < weight[i])
            {
                ans[i][j] = ans[i - 1][j];
            }
            else
            {
                ans[i][j] = max(ans[i - 1][j], ans[i - 1][j - weight[i]] + weight[i]);
            }
        }
    }
    int ans1 = ans[n][half];
    int ans2 = sum - ans1;
    cout << ans1 << " " << ans2 << endl;
    return 0;
}
