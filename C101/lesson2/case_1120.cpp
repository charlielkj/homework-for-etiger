//
//  case_1120.cpp
//  lesson
//
//  Created by 王斌军 on 2022/9/24.
//

#include <iostream>
using namespace std;
int main()
{
    int generations;
    cin >> generations;
    int tons[generations];
    for (int i = 0; i < generations; i++)
    {
        cin >> tons[i];
    }
    unsigned long long sum_tons = 0;
    for (int i = 0; i < generations; i++)
    {
        sum_tons += tons[i];
        cout << sum_tons << " ";
    }
    cout << endl;
    return 0;
}
