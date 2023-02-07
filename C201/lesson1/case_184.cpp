//
//  case_184.cpp
//  lesson
//
//  Created by 王斌军 on 2023/1/29.
//

#include <iostream>
#include <set>
using namespace std;
struct treasure
{
    int id;
    int value;
    int weight;
    bool operator<(const treasure & b)const
    {
        if(value > b.value)
        {
            return true;
        }
        if(value < b.value)
        {
            return false;
        }
        if(weight < b.weight)
        {
            return true;
        }
        if(weight > b.weight)
        {
            return false;
        }
        if(id < b.id)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    int n;
    cin >> n;
    set<treasure> treasures;
    treasure input;
    for (int i = 0; i < n; i++)
    {
        cin >> input.id >> input.value >> input.weight;
        treasures.insert(input);
    }
    set<treasure> :: iterator it;
    for (it = treasures.begin(); it != treasures.end(); it++)
    {
        cout << (*it).id << endl;
    }
    return 0;
}
