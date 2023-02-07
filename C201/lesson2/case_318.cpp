#include <iostream>
#include <string>
#include <set>
using namespace std;

struct card
{
    string color;
    string number;
    bool operator<(const card&a)const
    {
        if (color < a.color)
        {
            return 1;
        }

        if (color > a.color)
        {
            return 0;
        }

        if (number < a.number)
        {
            return 1;
        }
        return 0;
    }
};

int main()
{

    multiset <card> cards_m;
    set <card> cards_s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        card temp;
        //getline(cin, temp.color, temp.number);
        //getline(cin, temp.number,);
        cin >> temp.color >> temp.number;
        cards_m.insert(temp);
        cards_s.insert(temp);
    }
    if (cards_m.size() != cards_s.size())
    {
        cout << "I am angry" << endl;
    }
    else
    {
        cout << "Nice hand" << endl;
    }
    return 0;
}