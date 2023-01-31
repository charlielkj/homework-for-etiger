//
//  case_409.cpp
//  lesson
//
//  Created by 王斌军 on 2022/10/21.
//

#include <iostream>
using namespace std;
int score[10009],cnt[109],rk[109];
int main(){
    int n;
    //freopen("rank.in","r",stdin);
    //freopen("rank.out","w",stdout);
    while (cin >> input)
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> score[i];
        cnt[score[i]]++;
    }
    rk[0] = cnt[0];
    for (int i = 1; i <= 100; i++)
    {
        rk[i] = rk[i - 1] + cnt[i];
    }
    for (int i = 1; i <= n; i++)
    {
        int ans = n - rk[score[i]] + 1;
        cout << ans << " ";
    }
}

