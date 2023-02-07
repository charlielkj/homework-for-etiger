//
//  case_1497.cpp
//  lesson
//
//  Created by 王斌军 on 2023/1/29.
//

#include <iostream>
#include <set>
using namespace std;
struct student
{
    int id;
    int score;
    bool operator<(const student&a)const
    {
        if (score > a.score)
        {
            return true;
        }
        if (score < a.score)
        {
            return false;
        }
        if (id < a.id)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    int num;
    cin >> num;
    set<student> students;
    student input;
    for (int i = 0; i < num; i++)
    {
        cin >> input.score;
        input.id = i + 1;
        students.insert(input);
    }
    set<student>::iterator it;
    for (it = students.begin(); it != students.end(); it++)
    {
        cout << (*it).id << " " << (*it).score << endl;
    }
    return 0;
}
