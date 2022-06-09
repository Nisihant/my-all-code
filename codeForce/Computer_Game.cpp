// https://codeforces.com/problemset/problem/1598/A
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
    string s1, s2;
    cin >> s1 >> s2;
    REP(i,0,n)
    {
        if((s1[i]-'0')!=0&&(s2[i]-'0')!=0)
        {
            cout<<"NO"<<endl;
            return ;
        }
    }
    cout<<"YES"<<endl;

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