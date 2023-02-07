#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n;
    int target;
    cin >> n >> target;
    multiset <int> start;
    int input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input >= target)
        {
            cout << 0 << endl;
        }
        if (input >= 0)
        {
            start.insert(input);
        }
    }
    
    int cnt = 0;
    while (true)
    {
        cnt++;
        int can_pos = *start.begin();
        if (can_pos + 10 >= target)
        {
            break;
        }
        start.erase(start.begin());
        start.insert(can_pos + 10);
    }
    cout << cnt << endl;
    return 0;
}