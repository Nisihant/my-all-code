// https://codeforces.com/contest/1619/problem/A
#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define pii pair<int, int>
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define maxN
#define mod 1000000007
using namespace std;
string solve()
{
    string s;
    cin >> s;
    if(s.size()%2)
    return "NO";
    else
    {
        for(int i=0;i<s.size()/2;i++)
        {
            if(s[i]!=s[i+s.size()/2])
            return "NO";
        }
        return "YES";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}