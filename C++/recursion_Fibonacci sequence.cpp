//
//  recursion_Fibonacci sequence.cpp
//  lesson
//
//  Created by 王斌军 on 2022/9/4.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Fibonacci_sequence[n];
    Fibonacci_sequence[0] = 1;
    Fibonacci_sequence[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        Fibonacci_sequence[i] = Fibonacci_sequence[i - 1] + Fibonacci_sequence[i - 2];
    }
    cout << Fibonacci_sequence[n] <<endl;
}
