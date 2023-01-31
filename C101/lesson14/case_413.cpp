//
//  case_417.cpp
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
    int a[2009];
    int b[2009];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    int la = 0,lb = 0;
    int ra = n - 1,rb = n - 1;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[la] < b[lb] || a[ra] < b[rb])
        {
            cnt--;
            la++;
            rb--;
        }
        else if (a[la] > b[lb])
        {
            cnt++;
            la++;
            lb++;
        }
        else if (a[ra] > b[rb])
        {
            cnt++;
            ra--;
            rb--;
        }
        else if (a[la] == b[rb])
        {
            break;
        }
        else
        {
            cnt--;
            la++;
            rb--;
        }
    }
    cout << cnt * 200 << endl;
    return 0;
}
