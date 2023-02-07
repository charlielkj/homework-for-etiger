#include <iostream>
#include <string>
#include <map>
using namespace std;
int main()
{
    map <string, int> combination2;
    map <string, int> combination3;
    string input;
    while (cin >> input)
    {
        for (int i = 0; i < input.size() - 1; i++)
        {
            combination2[input.substr(i, 2)]++;
        }
        for (int i = 0; i < input.size() - 2; i++)
        {
            combination3[input.substr(i, 3)]++;
        }
    }
    string combination2_ans, combination3_ans;
    int biggest = 0;
    map <string, int> :: iterator mit;
    for (mit = combination2.begin(); mit != combination2.end(); mit++)
    {
        if (mit -> second > biggest)
        {
            biggest = mit -> second;
            combination2_ans = mit -> first;
        }
        
    }
    biggest = 0;
    for (mit = combination3.begin(); mit != combination3.end(); mit++)
    {
        if (mit -> second > biggest)
        {
            biggest = mit -> second;
            combination3_ans = mit -> first;
        } 
    }
    cout << combination2_ans << endl;
    cout << combination3_ans << endl;
    return 0;
}
