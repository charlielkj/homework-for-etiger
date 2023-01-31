//
//  case_290.cpp
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
    int num;
    cin >> num;
    set<string> heros;
    for (int i = 0; i < num; i++)
    {
        char JoinORLeave;
        string hero;
        cin >> JoinORLeave >> hero;
        if (JoinORLeave == '+')
        {
            heros.insert(hero);
        }
        else
        {
            heros.erase(hero);
        }
    }
    set<string>::iterator it;
    for(it = heros.begin(); it != heros.end(); ++it)
    {
        cout << *it << " ";
    }
}
