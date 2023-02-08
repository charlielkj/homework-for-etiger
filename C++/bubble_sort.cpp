//
//  bubble_sort.cpp
//  lesson
//
//  Created by 王斌军 on 2022/9/4.
//

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
#define LEN 100
int toSort[LEN];
void get_number()
{
    srand((unsigned)time(NULL));
    for (int i = 0; i < LEN; i++)
    {
        toSort[i] = rand()%99;
    }
}
void get_toSort()
{
    for (int i = 0; i < LEN; i++)
    {
        cout << toSort[i] << " ";
    }
}
void bubble_sort()
{
    for (int i = 0; i < LEN; i++)
    {
        for (int j = 0; j < LEN - i - 1; j++)
        {
            if (toSort[j] > toSort[j + 1])
            {
                int temp;
                temp = toSort[j];
                toSort[j] = toSort[j + 1];
                toSort[j + 1] = temp;
            }
        }
    }
}
int main()
{
    get_number();
    bubble_sort();
    get_toSort();
}
