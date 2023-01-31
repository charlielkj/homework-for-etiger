//
//  case_368.cpp
//  lesson
//
//  Created by 王斌军 on 2022/10/21.
//

#include <algorithm>
#include<iostream>
using namespace std;
int cnt[11];
int main()
{
    int sum_votes;
    int vote;
    cin >> sum_votes;
    for (int i = 0; i < sum_votes; i++)
    {
        cin >> vote;
        cnt[vote]++;
    }
    int min_votes = *min_element(cnt + 1, cnt + 11);
    int max_votes = *max_element(cnt + 1, cnt + 11);
    cout << max_votes - min_votes << endl;
    return 0;
}
