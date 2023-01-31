//
//  case_26.cpp
//  lesson
//
//  Created by 王斌军 on 2022/7/26.
//

#include <iostream>
using namespace std;
char input[109][109];
char output[109][109];
int directionx[8] = {1,1,1,0,0,-1,-1,-1};
int directiony[8] = {1,0,-1,1,-1,1,0,-1};
int count(int xpos,int ypos)
{
    int cnt = 0;
    for (int k = 0; k < 8; k++)
    {
        int toCheckLattice_xpos = xpos + directionx[k];
        int toCheckLattice_ypos = ypos + directiony[k];
        cnt += (input[toCheckLattice_xpos][toCheckLattice_ypos] == '*');
    }
    return cnt;
}

int main()
{
    int row,column;
    cin >> row >> column;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            cin >> input[i][j];
        }
    }
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <=column; j++)
        {
            if (input[i][j] == '?')
            {
                output[i][j] = '0' + count(i,j);
            }
            else
            {
                output[i][j] = input[i][j];
            }
        }
    }
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <=column; j++)
        {
            cout << output[i][j];
        }
        cout << endl;
    }
}
