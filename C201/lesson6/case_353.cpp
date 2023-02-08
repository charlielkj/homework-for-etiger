#include <iostream>
using namespace std;
#define SIZE 200
int fibonacci[509][SIZE];

void convert(int *converted, string to_convert)
{
    int i = 0;
    int length = to_convert.size();
    for (; i < length; i++)
    {
        converted[i] = to_convert[length - i - 1] - '0';
    }
    for (; i < SIZE; i++)
    {
        converted[i] = 0;
    }
}

void add(int *be_add, int *to_add)
{
    for (int i = 0; i < SIZE; i++)
    {
        if ((be_add[i] += to_add[i]) >= 10 )
        {
            be_add[i + 1]++;
            be_add[i] -= 10;
        }
    }
}

void print(int *to_print)
{
    int i = SIZE - 1;
    while (to_print[i] == 0)
    {
        i--;
    }
    for (; i >= 0; i--)
    {
        cout << to_print[i];
    } 
}

void copy(int *copy_to, int *be_copy)
{
    for (int i = 0; i < 509; i++)
    {
        copy_to[i] = be_copy[i];
    }
    
}
int main()
{
    int n;
    cin >> n;
    convert(fibonacci[0], "0");
    convert(fibonacci[1], "1");
    for (int i = 2; i < n + 3; i++)
    {
        copy(fibonacci[i], fibonacci[i - 1]);
        add(fibonacci[i], fibonacci[i - 2]);
    }
    print(fibonacci[n + 1]);
    return 0;
}