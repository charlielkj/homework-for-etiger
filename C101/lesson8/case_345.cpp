//
//  case_345.cpp
//  lesson
//
//  Created by 王斌军 on 2022/11/26.
//

#include <iostream>
using namespace std;
const int NUM = 100009;
int prime[NUM];
int ans[NUM];
bool isPrime(int num)
{
    if (num == 2)
    {
        return true;
    }
    if (num % 2 == 0 or num < 2)
    {
        return false;
    }
    else
    {
        for (int i = 3; i * i <= num; i += 2)
        {
            if (num % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
int main()
{
    for (int i = 2; i < NUM; i++)
    {
        prime[i] = isPrime(i);
    }
    for (int i = 1; i < NUM; i++)
    {
        ans[i] = ans[i - 1] + prime[i];
    }
    int num;
    cin >> num;
    int input1,input2;
    for (int i = 1; i <= num; i++)
    {
        cin >> input1 >> input2;
        cout << ans[input2] - ans[input1 - 1] << " ";
    }
    return 0;
}
