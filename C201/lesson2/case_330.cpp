#include <iostream>
#include <string>
#include <map>
using namespace std;

struct stud
{
    string name;
    string sex;
    bool operator<(const stud&a)const
    {
        if (name < a.name)
        {
            return 1;
        }
        if (name > a.name)
        {
            return 0;
        }
        if (sex > a.sex)
        {
            return 1;
        }
        return 0;
    }
};

int main()
{
    map <stud, int> info;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        stud temp;
        int Chi,Mat,Eng;
        cin >> temp.name >> temp.sex >> Chi >> Mat >> Eng;
        int score = Chi + Mat + Eng; 
        info[temp] = score;
    }
    cout << info.size() << endl;
    map <stud, int> :: iterator mit;
    for (mit = info.begin(); mit != info.end(); mit++)
    {
        cout << mit -> first.name << " ";
        cout << mit -> first.sex << " ";
        cout << mit -> second << endl;
    }
    return 0;
}
