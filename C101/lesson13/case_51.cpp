//
//  case_51.cpp
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
    int studs;
    int taps;
    cin >> studs >> taps;
    for (int i = 1; i <= taps; i++)
    {
        nums.insert(0);
    }
    for (int i = 1; i <= studs; i++)
    {
        int input;
        cin >> input;
        int temp = *nums.begin();
        nums.erase(nums.begin());
        nums.insert(temp + input);
    }
    
    cout << *nums.rbegin() << endl;
    return 0;
}

