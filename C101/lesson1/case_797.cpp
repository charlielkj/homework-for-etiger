//
//  case_797.cpp
//  lesson
//
//  Created by 王斌军 on 2022/9/11.
//

#include <iostream>
using namespace std;
bool isLuckyNumber(long long num)
{
    do{
        if (num % 10 != 5 && num % 10 != 8)
        {
            return false;
        }
        num /= 10;
    }while(num);
    return true;
}
int main()
{
    long long most_lucky_number;
    cin >> most_lucky_number;
    long long lucky_number_sum = 1;
    long long ans = 5;
    while (lucky_number_sum < most_lucky_number)
    {
        ans++;
        if (isLuckyNumber(ans))
        {
            lucky_number_sum++;
        }
    }
    cout << ans << endl;
    return 0;
}
