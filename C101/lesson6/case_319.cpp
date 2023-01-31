//
//  case_319.cpp
//  lesson
//
//  Created by 王斌军 on 2022/11/12.
//

#include <iostream>
#include <string>
#include <set>
using namespace std;
int main()
{
    set<string> names;
    string surname;
    string name;
    int numf;
    cin >> numf;
    for (int i = 1; i <= numf; i++)
    {
        cin >> name >> surname;
        names.insert(name);
    }
    cin >> name >> surname;
    if (names.find(name) == names.end())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
