//
//  case_1068.cpp
//  lesson
//
//  Created by 王斌军 on 2022/10/30.
//

#include <algorithm>
#include <iostream>
using namespace std;
int ans[1009];
int volume;
int d1,d2,d3;
int main()
{
    freopen("stomach.in","r",stdin);
    freopen("stomach.out","w",stdout);
    cin >> volume;
    cin >> d1 >> d2 >> d3;
    ans[0] = 0;
    for (int i = 1; i <= volume; i++)
    {
        ans[i] = ans[i - 1];
        if (i >= d1)
        {
            ans[i] = max(ans[i], ans[i - d1] + d1);
        }
        if (i >= d2)
        {
            ans[i] = max(ans[i], ans[i - d2] + d2);
        }
        if (i >= d3)
        {
            ans[i] = max(ans[i], ans[i - d3] + d3);
        }
    }
    cout << ans[volume] << endl;
    return 0;
}
