#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define pii pair<int, int>
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define maxN
#define mod 1000000007
using namespace std;
lli solve()
{
    int n;
    cin >> n;
    int p[n], c[n];
    REP(i, 0, n)
        cin >> p[i];

    REP(i, 0, n)
        cin >> c[i];
    sort(p, p + n);
    sort(c, c + n);
    lli ans = 1;
    map<lli, lli> mp;
    REP(i, 0, n)
    {
        int j = 0;
        while (p[i] > c[j]&&j<n)
        {
            j++;
            mp[p[i]]++;
        }
    }
    int temp=n;
    for(int i=n-1;i>=0;i--)
    {
        if(temp-mp[p[i]]==0)
        return 0;

        ans*=(temp-mp[p[i]]);
        temp--;
    }
    return ans;
}
int main()
{
    cout << solve() << endl;
    return 0;
}