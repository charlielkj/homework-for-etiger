//
//  snake_game.cpp
//  lesson
//
//  Created by WWT on 2022/8/2.
//
#include <iostream>
#include <cmath>
using namespace std;
#define MAX 9
char chessboard[MAX][MAX];
int xpos,ypos;
bool is_black_win = false;
bool is_white_win = false;
bool is_black_term = true;


void Chessboard_initialization()
{
    for (int i = 1; i <= 14; i++)
    {
        for (int j = 1; j <= 14; j++)
        {
            chessboard[i][j] = '.';
        }
    }
}
//棋盘初始化


void chessboard_output()
{
    cout << "X" << " " << "123456789" << endl;
    for (int i = 1; i <= 9; i++)
    {
        cout << i << " ";
        for (int j = 1; j <= 9; j++)
        {
            cout << chessboard[i][j];
        }
        cout << endl;
    }
}
//棋盘输出


bool is_win(int x,int y,char chess)
{
    int xMin = max(0,x - 4);//水平位置最小值
    int xMax = min(x + 4,MAX - 1);//水平位置最大值
    int yMin = max(0,y - 4);//垂直位置最小值
    int yMax = min(y + 4,MAX - 1);//垂直位置最大值
    int sum = 0;
    int i,j,p,q;
    //在水平方向遍历，看是否有连续5颗相同颜色的棋子
    for(int i = xMin;i <= xMax - 4;i++)
    {
        sum = 0;
        for (int j = i; j < i + 5; i++)
        {
            if (chessboard[i][y] == chess)
            {
                sum++;
            }
            if (sum == 5)
            {
                return true;
            }
        }
    }
 
    //在垂直方向遍历，看是否有连续5颗相同颜色的棋子
    for(int i = yMin;i <= yMax - 4;i++)
    {
        sum = 0;
        for(int j = i;j < i + 5;j++)
        {
            if(chessboard[x][j] == chess)
            {
                sum++;
            }
        }
        if(sum == 5)
        {
            return true;
        }
    }
 
    //左上角位置，从(x,y)开始沿左上方寻找，找到一个满足条件的最大正方形，则从正方形的左上顶点开始沿对角线遍历
    for(i = x,j = y;i > xMin && j > yMin;i--,j--);
    //从左上角向右下角遍历，看是否有连续5颗相同颜色的棋子
    for(;i <= xMax - 4 && j <= yMax - 4;static_cast<void>(i++),j++)
    {
        sum = 0;
        for(p = i,q = j;p < i + 5;p++,q++)
        {
            if (chessboard[p][q] == chess)
                sum++;
            else
                break;
        }
        if(sum == 5)
            return true;
    }
 
    //左下角位置，从(x,y)开始沿左下方寻找，找到一个满足条件的最大正方形，则从正方形的左下顶点开始沿对角线遍历
    for(i = x,j = y;i > xMin && j < yMax;i--,j++);
    //从左下角向右上角遍历，看是否有连续5颗相同颜色的棋子
    for(;i <= xMax - 4 && j >= yMin + 4;i++,j--)
    {
        sum = 0;
        for(p = i,q = j;p < i + 5;p++,q--)
        {
            if (chessboard[p][q] == chess)
                sum++;
            else
                break;
        }
        if(sum == 5)
            return true;
    }
    return false;
}


int main()
{
    Chessboard_initialization();
    chessboard_output();
    
    while (!is_black_win && !is_white_win)
    {
        cin >> xpos >> ypos;

        if (chessboard[xpos][ypos] == '.')
        {
            if (is_black_term)
            {
                chessboard[xpos][ypos] = '@';
                is_black_term = !is_black_term;
            }
            
            else
            {
                chessboard[xpos][ypos] = '#';
                is_black_term = !is_black_term;
            }
            chessboard_output();
        }
        
        else
        {
            cout << "You can't drop there." << endl;
        }
        
        
        if (is_win(xpos, ypos,chessboard[xpos][ypos]))
        {
            if (!is_black_term == true)
            {
                is_black_win = true;
                cout << "BLACK WINS!" <<endl;
            }
            else
            {
                is_white_win = true;
                cout << "WHITE WINS" << endl;
            }
        }
    }
    
    return 0;
}


/*
 bool is_win(int x,int y)
 {
     int xMin = max(0,x - 4);//水平位置最小值
     int xMax = min(x + 4,MAX - 1);//水平位置最大值
     int yMin = max(0,y - 4);//垂直位置最小值
     int yMax = min(y + 4,MAX - 1);//垂直位置最大值
  
     int i,j,p,q;
     int sum;
     //在水平方向遍历，看是否有连续5颗相同颜色的棋子
     for(i = xMin;i <= xMax - 4;i++)
     {
         sum = 0;
         for(j = i;j < i + 5;j++)
         {
             if(chessboard[j][y] == chessboard[x][y])
                 sum++;
             else
                 break;
         }
         if(sum == 5)
             return true;
     }
  
     //在垂直方向遍历，看是否有连续5颗相同颜色的棋子
     for(i = yMin;i <= yMax - 4;i++)
     {
         sum = 0;
         for(j = i;j < i + 5;j++)
         {
             if(chessboard[x][i] == chessboard[x][y])
                 sum++;
             else
                 break;
         }
         if(sum == 5)
             return true;
     }
  
     //左上角位置，从(x,y)开始沿左上方寻找，找到一个满足条件的最大正方形，则从正方形的左上顶点开始沿对角线遍历
     for(i = x,j = y;i > xMin && j > yMin;i--,j--);
     //从左上角向右下角遍历，看是否有连续5颗相同颜色的棋子
     for(;i <= xMax - 4 && j <= yMax - 4;i++,j++)
     {
         sum = 0;
         for(p = i,q = j;p < i + 5;p++,q++)
         {
             if (chessboard[p][q] == chessboard[x][y])
                 sum++;
             else
                 break;
         }
         if(sum == 5)
             return true;
     }
  
     //左下角位置，从(x,y)开始沿左下方寻找，找到一个满足条件的最大正方形，则从正方形的左下顶点开始沿对角线遍历
     for(i = x,j = y;i > xMin && j < yMax;i--,j++);
     //从左下角向右上角遍历，看是否有连续5颗相同颜色的棋子
     for(;i <= xMax - 4 && j >= yMin + 4;i++,j--)
     {
         sum = 0;
         for(p = i,q = j;p < i + 5;p++,q--)
         {
             if (chessboard[p][q] == chessboard[x][y])
                 sum++;
             else
                 break;
         }
         if(sum == 5)
             return true;
     }
     return false;

 }
 */
