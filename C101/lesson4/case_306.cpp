//
//  case_306.cpp
//  lesson
//
//  Created by 王斌军 on 2022/10/30.
//

#include <iostream>
using namespace std;
int value[109];
int ans[109];
int main()
{
    int treasures;
    cin >> treasures;
    for (int i = 1; i <= treasures; i++)
    {
        cin >> value[i];
    }
    ans[0] = 0;
    ans[1] = value[1];
    ans[2] = max(value[1], value[2]);
    for (int i = 3; i <= treasures; i++)
    {
        ans[i] = max(ans[i - 1] ,ans[i - 3] + value[i]);
    }
    cout << ans[treasures] << endl;
    
}
