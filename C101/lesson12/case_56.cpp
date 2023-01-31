//
//  case_56.cpp
//  lesson
//
//  Created by 王斌军 on 2022/12/24.
//

#include <iostream>
using namespace std;
int difs[1000009];
int ans[1000009];
int main()
{
    int length,removal_times;
    cin >> length >> removal_times;
    for (int i = 1; i <= removal_times; i++)
    {
        int start,end;
        cin >> start >> end;
        if (start > end)
        {
            swap(start, end);
        }
        difs[start]++;
        difs[end + 1]--;
    }
    int cnt = 0;
    for (int i = 1; i <= length; i++)
    {
        ans[i] = ans[i - 1] + difs[i];
        if (ans[i] == 0)
        {
            cnt++;
        }
    }
    cnt++;
    cout << cnt << endl;
}
