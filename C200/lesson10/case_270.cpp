//
//  case_270.cpp
//  lesson
//
//  Created by 王斌军 on 2022/7/28.
//

#include <iostream>
using namespace std;
int main()
{
    int daynum;
    cin >> daynum;
    int day = 0;
    int salary = 1;
    int sum = 0;
    while (day + salary <= daynum)
    {
        sum += salary * salary;
        day += salary;
        salary++;
    }
    sum += (daynum - day) * salary;
    cout << sum << endl;
}
