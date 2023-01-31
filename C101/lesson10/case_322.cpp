//
//  case_322.cpp
//  lesson
//
//  Created by 王斌军 on 2022/12/17.
//

#include <iostream>
using namespace std;
int weight[6];
int ans[9][109];
int main()
{
    int most_weigh = 100;
    int presents = 5;
    for (int i = 1; i <= presents; i++)
    {
        cin >> weight[i];
    }
    for (int i = 1; i <= presents; i++)
    {
        for (int j = 0; j <= most_weigh; j++)
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
    cout << ans[presents][most_weigh] << endl;
}
