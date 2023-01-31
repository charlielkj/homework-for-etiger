//
//  case_133.cpp
//  lesson
//
//  Created by 王斌军 on 2022/12/17.
//

#include <iostream>
using namespace std;
int ans[1009][10009];
int weight[1009],value[1009];
int main()
{
    int n,capacity;
    cin >> capacity >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> weight[i] >> value[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= capacity; j++)
        {
            if (j < weight[i])
            {
                ans[i][j] = ans[i - 1][j];
            }
            else
            {
                ans[i][j] = max(ans[i - 1][j], ans[i - 1][j - weight[i]] + value[i]);
            }
        }
    }
    cout << ans[n][capacity] << endl;
    return 0;
}
