#include <iostream>
#include <set>
using namespace std;
int pos[1009];
struct info
{
    int size;
    bool operator<(const info&a)const
    {
        return pos[size] < pos[a.size];
    }
};

int main()
{
    int capacity;
    int length;
    cin >> capacity >> length;
    set <info> memory;
    int ans = 0;
    for (int i = 1; i <= length; i++)
    {
        info input;
        cin >> input.size;
        if (memory.count(input) == 0)
        {
            ans++;
            if (memory.size() == capacity)
            {
                memory.erase(memory.begin());
            }
            pos[input.size] = i;
            memory.insert(input); 
        }
        
    }
    cout << ans << endl;
    return 0;

}