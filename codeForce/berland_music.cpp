// https://codeforces.com/contest/1622/problem/B
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
    int n;
    cin >> n;
    lli p[n + 1];
    vector<pair<lli,lli>> lk, dlk;
    REP(i, 1, n + 1)
    {
        cin >> p[i];
    }
    string s;
    cin >> s;
    
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            dlk.push_back({p[i + 1], i + 1});
        else
            lk.push_back({p[i + 1], i + 1});
    }
    sort(dlk.begin(),dlk.end());
    sort(lk.begin(),lk.end());

int cnt=1;
    for(int i=0;i<dlk.size();i++,cnt++)
    {
        dlk[i].first=cnt;
    }

    for(int i=0;i<lk.size();i++,cnt++)
    {
        lk[i].first=cnt;
    }

    lli q[n+1];
    for(int i=0;i<dlk.size();i++)
    {
        q[dlk[i].second]=dlk[i].first;
    }

    for(int i=0;i<lk.size();i++)
    {
        q[lk[i].second]=lk[i].first;
    }

    REP(i,1,n+1)
    cout<<q[i]<<" ";
    cout<<endl;
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