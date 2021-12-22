// https://cses.fi/problemset/task/1158
#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define pii pair<int, int>
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define maxN 100001
#define mod 1000000007
using namespace std;
int dp[1001][maxN];
void solve()
{
}
int main()
{
    int n, total;
    cin >> n >> total;
    int page[n + 1];
    int price[n + 1];
    REP(i, 1, n + 1)
        cin >> price[i];
    REP(i, 1, n + 1)
        cin >> page[i];

    REP(i, 1, n + 1)
    {
        REP(j, 1, total + 1)
        {
            if (price[i] > j)
                dp[i][j] = dp[i - 1][j];   
            else
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-price[i]]+page[i]);
        }
    }
    cout<<dp[n][total];
    
    return 0;
}