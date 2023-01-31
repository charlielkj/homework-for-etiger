//
//  case_1426.cpp
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
    int Mcard[29];
    int Lcard[29];
    for (int i = 0; i < n; i++)
    {
        cin >> Mcard[i];
    }
    sort(Mcard, Mcard + n);
    for (int i = 0,j = 0,p = 1; p <= n * 2; p++)
    {
        if (p == Mcard[i])
        {
            i++;
        }
        else
        {
            Lcard[j] = p;
            j++;
        }
    }
    int i = 0,j = 0,ans = 0;
    while (i < n && j < n)
    {
        if (Mcard[i] >= Lcard[j])
        {
            j++;
        }
        else
        {
            ans++;
            i++;
            j++;
        }
    }
    cout << ans << endl;
    return 0;
}
