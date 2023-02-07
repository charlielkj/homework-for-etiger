#include <iostream>
#include <string>
#include <map>
using namespace std;

struct player
{
    string name;
    int score;
};

int main()
{
    map <string, player> info;
    int n;
    cin >> n;
    string country;
    for (int i = 0; i < n; i++)
    {
        player temp;
        cin >> temp.name >> country >> temp.score;
        if (info[country].score < temp.score )
        {
            info[country] = temp;
        }
    }
    cout << info.size() << endl;
    map <string, player> :: iterator mit;
    for (mit = info.begin(); mit != info.end(); mit++)
    {
        cout << mit -> first << " ";
        cout << mit -> second.name << endl;
    }
    return 0;
}