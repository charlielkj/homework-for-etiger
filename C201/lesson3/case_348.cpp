#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    string input;
    map <string, int> cnt;
    while(cin >> input)
    {
        cnt[input]++;
    }
    int biggest = 0;
    map <string, int> :: iterator mit;
    string ans;
    for (mit = cnt.begin(); mit != cnt.end(); mit++)
    {
        int temp = mit -> second;
        if (temp > biggest)
        {
            biggest = temp;
            ans = mit -> first;
        }
        
    }
    cout << ans << endl;
    return 0;
}

