//
//  case_293.cpp
//  lesson
//
//  Created by 王斌军 on 2022/12/3.
//

#include <iostream>
using namespace std;
long long routes[21][21];
int main()
{
    long long pos_endx,pos_endy;
    long long pos_barrierx,pos_barriery;
    cin >> pos_endx >> pos_endy >> pos_barrierx >> pos_barriery;
    for (int i = 1; i <= pos_endx; i++)
    {
        for (int j = 1; j <= pos_endy; j++)
        {
            if (i == 1 && j == 1)
            {
                routes[i][j] = 1;
            }
            if (pos_barrierx == i && pos_barriery == j)
            {
                routes[i][j] = 0;
            }
            else
            {
                routes[i][j] = routes[i][j - 1] + routes[i - 1][j];
            }
        }
    }
    cout << routes[pos_endx][pos_endy] << endl;
    return 0;
}
