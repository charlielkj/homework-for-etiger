#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int input;
    multiset <int> blood;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        blood.insert(input);
    }
    int blood_;
    int cnt = 0;
    for (int time = 0; time < n; time++)
    {
        blood_ = *blood.begin();
        if (blood_ > time)
        {
            cnt++;
        }
        blood.erase(blood.begin());
    }
    cout << cnt << endl;
    return 0;  
}