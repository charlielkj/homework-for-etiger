#include <iostream>
#include <string>
using namespace std;
#define SIZE 509
int num1[SIZE],num2[SIZE],num3[SIZE];
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
int main()
{
    string n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    convert(num1, n1);
    convert(num2, n2);
    convert(num3, n3);
    add(num1, num2);
    add(num1,num3);
    print(num1);
    return 0;
}