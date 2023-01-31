//
//  case_790.cpp
//  lesson
//
//  Created by 王斌军 on 2022/9/10.
//

#include <iostream>
using namespace std;
long long count(long long num,long long toCount)
{
    long long cnt = 0;
    do{
        if (num % 10 == toCount)
        {
            cnt++;
        }
        num /= 10;
    }while (num);
    return cnt;
}
int main()
{
    int bug_km;
    int ans = 0;
    freopen("gls.in","r",stdin);
    freopen("gls.out","w",stdout);
    cin >> bug_km;
    for (long long i = 0; i < bug_km; i++)
    {
        if (count(i,3) == 0 && count(i,8) == 0)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
