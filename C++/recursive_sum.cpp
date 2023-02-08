//
//  recursion_sum.cpp
//  lesson
//
//  Created by 王斌军 on 2022/9/4.
//

#include <iostream>
using namespace std;
#define LEN 10
int toSum[LEN] = {1,2,3,4,5,6,7,8,9,10};
int recursive(int *array, int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return array[n-1] + recursive(array, n - 1);
    }
}

int main()
{
    cout << recursive(toSum, LEN) << endl;
}



