#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define pii pair<int, int>
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define maxN
#define mod 1000000007
using namespace std;
void solve()
{
    int a[4];
    REP(i, 0, 4)
    cin >> a[i];
    for (int i = 1; i <= 15; i++)
    {
        int temp = 1, sum = 0;
        for (int j = 0; j < 4; j++)
        {
            if (i & temp << j)
            {
                sum+=a[j];
            }
        }
        if (sum == 0)
        {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
    return ;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}