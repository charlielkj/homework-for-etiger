//
//  case_410.cpp
//  lesson
//
//  Created by 王斌军 on 2022/10/21.
//

#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int cnt[4] = {0};
    char input;
    //freopen("love.in","r",stdin);
    //freopen("love.out","w",stdout);
    while (cin >> input)
    {
        switch (input)
        {
            case 'l':
                cnt[0]++;
                break;
            
            case 'o':
                cnt[1]++;
                break;
                
            case 'v':
                cnt[2]++;
                break;
            
            case 'e':
                cnt[3]++;
                break;
                
            case 'w':
                cnt[2] += 2;
                break;
            
            default:
                break;
        }
    }
    cout << *min_element(cnt,cnt + 4) <<endl;
    return 0;
}
