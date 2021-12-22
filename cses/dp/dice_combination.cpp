// https://cses.fi/problemset/task/1633
#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define pii pair<int, int>
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define maxN 1000001
#define mod 1000000007
using namespace std;
int dp[maxN];
void solve()
{
}
int main()
{
    dp[0] = 1;
    int n, t;
    //  cin >> t;
    // while (t--)
    {
       cin >> n;
    //    for(int i=1;i<=n;i++) dp[i]=0;
        for (int i = 1; i <= n; i++)
        {
            int dic = 1;
            while (dic <=i&&dic<=6)
            {
                dp[i] =(dp[i]+ dp[i-dic])%mod;
                dic++;
            }
           
        }
        cout << dp[n] << endl;
    }
    return 0;
}