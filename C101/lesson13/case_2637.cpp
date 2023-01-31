//
//  case_2637.cpp
//  lesson
//
//  Created by 王斌军 on 2022/12/31.
//

#include <iostream>
#include <set>
using namespace std;
int main()
{
    multiset<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        nums.insert(input);
    }
    multiset <int>::iterator it;
    for (int i = 1; i < n ; i++)
    {
        it = nums.end();
        it--;
        int num1 = *it;
        nums.erase(it);
        it = nums.end();
        it--;
        int num2 = *it;
        nums.erase(it);
        nums.insert(num1 * num2 + 1);
    }
    cout << *nums.begin() << endl;
    return 0;
}
