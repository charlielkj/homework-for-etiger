//
//  case_436.cpp
//  lesson
//
//  Created by 王斌军 on 2022/11/5.
//

#include <iostream>
using namespace std;
int main()
{
    int criminals;
    int most_IQ;
    cin >> criminals >> most_IQ;
    int IQ[109];
    for (int i = 0; i < criminals; i++)
    {
        cin >> IQ[i];
    }
    int temp = 0;
    int ans = 1;
    int flag = true;
    for (int i = 0; i < criminals; i++)
    {
        if (IQ[i] > most_IQ)
        {
            flag = false;
            break;
        }
        if (temp + IQ[i] > most_IQ)
        {
            ans++;
            temp = 0;
        }
        temp += IQ[i];
    }
    if (flag)
    {
        cout << ans << endl;
    }
    else
    {
        cout << flag << endl;
    }
}
