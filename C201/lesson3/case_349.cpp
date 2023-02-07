#include <iostream>
#include <string>
#include <map>
using namespace std;
struct password
{
    string word;
    int cnt;
    bool operator<(const password&a)const
    {
        return cnt > a.cnt || cnt == a.cnt && word < a.word;
    }
};
password ans[100009];
int main()
{
    string input;
    map <string, int> count;
    while(cin >> input)
    {
        count[input]++;
    }
    map <string, int> :: iterator mit;
    int n = 0;
    for (mit = count.begin(); mit != count.end(); mit++)
    {
        ans[n].word = mit -> first;
        ans[n].cnt = mit -> second;
        n++;
    }
    sort(ans, ans + n);
    for (int i = 0; i < 3; i++)
    {
        cout << ans[i].word << endl;
    }
    return 0;
}