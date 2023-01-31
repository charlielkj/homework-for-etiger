//
//  case_1779.cpp
//  lesson
//
//  Created by 王斌军 on 2022/12/3.
//

#include <iostream>
using namespace std;
long long routes[2009][2009];
long long posx,posy;
int main()
{
    cin >> posx >> posy;
    for (int i = 1; i <= posx; i++)
    {
        for (int j = 1; j <= posy; j++)
        {
            if (i == 1 && j == 1)
            {
                routes[i][j] = 1;
            }
            else
            {
                routes[i][j] = (routes[i][j - 1] + routes[i - 1][j]) % 10000007;
            }
        }
    }
    cout << routes[posx][posy] << endl;
}
