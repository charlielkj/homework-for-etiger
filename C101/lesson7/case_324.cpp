//
//  case_324.cpp
//  lesson
//
//  Created by 王斌军 on 2022/11/19.
//

#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    map<string, int> money;
    map<string, int>:: iterator mit;
    //freopen("envelope.in", "r", stdin);
    //freopen("envelope.out", "w", stdout);
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int amount,people;
        char multiply;
        string giver,receiver;
        cin >> giver >> amount >> multiply >> people;
        money[giver] -= amount * people;
        for (int j = 0; j < people; j++)
        {
            cin >> receiver;
            money[receiver] += amount;
        }
    }
    cout << money.size() << endl;
    for (mit = money.begin(); mit != money.end(); ++mit)
    {
        cout << mit -> first << " " << mit -> second << endl;
    }
    return 0;;
}
