//
//  case_291.cpp
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
    int messages;
    set<string> zombies;
    zombies.insert("zombie");
    cin >> messages;
    for (int i = 0; i < messages; i++)
    {
        string creature1,creature2;
        cin >> creature1 >> creature2;
        if (zombies.count(creature1))
        {
            zombies.insert(creature2);
        }
        else if(zombies.count(creature2))
        {
            zombies.insert(creature1);
        }
    }
    cout << zombies.size() << endl;
}
