//
//  case_766.cpp
//  lesson
//
//  Created by 王斌军 on 2022/7/28.
//

#include <iostream>
using namespace std;
int main()
{
    int num;
    int slash_id = 1;
    int cnt = 0;
    cin >> num;
    while (slash_id + cnt < num)
    {
        cnt += slash_id;
        slash_id++;
    }
    switch (slash_id % 2)
    {
        case 0:
            cout << num - cnt << "/" << slash_id - (num - cnt) + 1 << endl;
            break;
        case 1:
            cout << slash_id - (num - cnt) + 1 << "/" << num - cnt << endl;
        default:
            break;
    }
    return 0;
}
