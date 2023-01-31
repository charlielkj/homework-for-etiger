//
//  case_232.cpp
//  lesson
//
//  Created by 王斌军 on 2022/10/1.
//

#include <iostream>
using namespace std;
struct questions
{
    int start;
    int end;
};
int main()
{
    int days,question;
    cin >> days >> question;
    int money[days];
    questions area[question];
    for (int i = 0; i < days; i++)
    {
        cin >> money[i];
    }
    for (int i = 0; i < question; i++)
    {
        cin >> area[i].start >> area[i].end;
    }
    for (int i = 0; i < question; i++) {
        int sum = 0;
        cout << area[i].end - area[i].start + 1 << " " << area[i].start - 1 << endl;
        for (int j = area[i].start - 1; j < area[i].end; j++)
        {
            sum += money[j];
        }
        cout << sum << " ";
    }
}
/*
 10 3
 5 7 95 44 70 4 91 40 52 87
 5 7 5 6 1 6
 */
