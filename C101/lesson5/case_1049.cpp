//
//  case_1049.cpp
//  lesson
//
//  Created by 王斌军 on 2022/11/5.
//

#include <iostream>
#include <cmath>
using namespace std;
int money[4] = {9,3,2,1};
int main()
{
    int target;
    int pieces = 0;
    cin >> target;
    for (int i = 0; i < 4; i++)
    {
        pieces += floor(target / money[i]);
        target %= money[i];
    }
    
    cout << pieces << endl;
}
