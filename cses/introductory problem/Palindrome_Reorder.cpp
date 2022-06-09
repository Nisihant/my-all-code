#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define pii pair<int, int>
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define REPR(i, s, n) for (lli i = n - 1; i >= s; i--)
#define maxN
#define mod 1000000007
using namespace std;
void solve()
{
}
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    map<char, int> mp;
    for (int i = 0; i < n; i++)
        mp[s[i]]++;

    int oddcnt = 0;
    char oddchar;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second % 2)
            {
                oddchar = it->first;
                 oddcnt++;
            }
    }

    if ((n % 2 == 0 && oddcnt == 0) || (n % 2 && oddcnt == 1))
    {
        string ans;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            for (int i = 1; i <= (it->second / 2); i++)
                ans += it->first;
        }
        cout<<ans;
        if (n % 2)
        {
            cout<<oddchar;
        }
        reverse(ans.begin(),ans.end());
        cout<<ans;
    }
    else
        cout << "NO SOLUTION" << endl;
    return 0;
}