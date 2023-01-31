#include <iostream>
using namespace std;
int difs[2009][2009];
int ans[2009][2009];
int main()
{
    long long size,paints;
    int xstart,ystart,xend,yend;
    //freopen("mondrian.in","r",stdin);
    //freopen("mondrian.out","w",stdout);
    cin >> size >> paints;
    int a,b,x,y;
    for (int i = 1; i <= size; i++)
    {
        cin >> a >> b >> x >> y;
        for (int j = xstart; j <= xend; j++)
        {
            difs[a][b]++;
            difs[a][y + 1]--;
            difs[x + 1][b]--;
            difs[x + 1][y + 1]++;
        }
    }
    long long answer = size * size;
    for (int i = 1; i <= paints; i++)
    {
        for (int j = 1; j <= paints; j++)
        {
            ans[i][j] = difs[i][j] + ans[i][j - 1] + ans[i - 1][j] - ans[i - 1][j - 1];
            if (ans[i][j])
            {
                answer--;
            }
        }
    }
    cout << answer << endl;
    return 0;
}
