//
//  case_68.cpp
//  lesson
//
//  Created by 王斌军 on 2022/12/24.
//

#include <iostream>
using namespace std;
int scores[500009];
int difs[500009];
int ans[500009];
int main()
{
    int students;
    int changes;
    cin >> students >> changes;
    for (int i = 1; i <= students; i++)
    {
        cin >> scores[i];
    }
    for (int i = 1; i <= students; i++)
    {
        difs[i] = scores[i] - scores[i - 1];
    }
    for (int i = 1; i <= changes; i++)
    {
        int start,end,extra_points;
        cin >> start >> end >> extra_points;
        if (start > end)
        {
            swap(start, end);
        }
        difs[start] += extra_points;
        difs[end + 1] -= extra_points;
    }
    for (int i = 1; i <= students; i++)
    {
        ans[i] = ans[i - 1] + difs[i];
    }
    cout << *min_element(ans + 1, ans + students + 1) << endl;
    return 0;
}
