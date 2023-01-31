//
//  case_323.cpp
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
    map<string, int> scores;
    map<string, int>::iterator mit;
    //freopen("assignment.in","r",stdin);
    //freopen("assignment.out", "w", stdout);
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        string name;
        int score;
        cin >> name >> score;
        if (score> scores[name] || scores.find(name) == scores.end())
        {
            scores[name] = score;
        }
    }
    cout << scores.size() << endl;
    for (mit = scores.begin(); mit != scores.end(); ++mit) {
        cout << mit -> first << " " << mit -> second << endl;
    }
    return 0;
    
}
