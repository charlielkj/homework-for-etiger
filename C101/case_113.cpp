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
    int power = 0;
    for (int i = 1; i < n ; i++)
    {
        it = nums.begin();
        int num1 = *it;
        nums.erase(it);
        it = nums.begin();
        int num2 = *it;
        nums.erase(it);
        nums.insert(num1 + num2);
        power += (num1 + num2);
    }
    cout << power << endl;
    return 0;
}
