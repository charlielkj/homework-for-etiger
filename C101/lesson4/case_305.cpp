//
//  case_305.cpp
//  lesson
//
//  Created by 王斌军 on 2022/10/29.
//

#include <iostream>
using namespace std;
long long ans[100];
long long steps,s1,s2;
int main()
{
    cin >> steps >> s1 >> s2;
    ans[0] = 1;
    for (int i = 1; i <= steps; i++)
    {
        ans[i] = 0;
        if (i >= s1)
        {
            ans[i] += ans[i - s1];
        }
        if (i >= s2)
        {
            ans[i] += ans[i - s2];
        }
    }
    cout << ans[steps] << endl;
}
