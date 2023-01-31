//
//  case_413.cpp
//  lesson
//
//  Created by 王斌军 on 2023/1/7.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int axe_power[29];
    int begger_power[29];
    for (int i = 1; i <= n; i++)
    {
        cin >> axe_power[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> begger_power[i];
    }
    sort(axe_power + 1, axe_power + 1 + n);
    sort(begger_power + 1, begger_power + 1 + n);
    long long ans = 1;
    int i = 1;
    for (int j = 1; j <= n; j++)
    {
        while (i <= n && axe_power[i] <= begger_power[j])
        {
            i++;
        }
        ans *= i - j;
    }
    cout << ans << endl;
    return 0;
}

