#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define REPR(i, s, n) for (lli i = n - 1; i >= s; i--)
#define maxN
#define mod 1000000007
using namespace std;
int dirX[4] = {1, 0, 0, -1};
int dirY[4] = {0, 1, -1, 0};
char move[4] = {'D', 'R', 'L', 'U'};
int dp[51][51];
void solve()
{
}
bool issquare(int a, int b)
{
    int m = sqrt(a * a + b * b);

    return (m * m == (a * a + b * b));
}
int main()
{
    int t = 1;
    cin >> t;
    for (int i = 0; i < 51; i++)
    {
        for (int j = 0; j < 51; j++)
        {
            dp[i][j] = 1000000000;
        }
    }
    dp[0][0] = 0;

    for (int x1 = 0; x1 < 51; x1++)
    {
        for (int y1 = 0; y1 < 51; y1++)
        {
            for (int x2 = 0; x2 < 51; x2++)
            {
                for (int y2 = 0; y2 < 51; y2++)
                {
                    if (issquare(x2 - x1, y2 - y1))
                    {
                        dp[x2][y2] = min(dp[x2][y2], 1 + dp[x1][y1]);
                    }
                }
            }
        }
    }
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        cout << dp[x][y] << endl;
    }
    return 0;
}