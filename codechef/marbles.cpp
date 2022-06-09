// https://www.codechef.com/INFI21B/problems/MARBLE
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
}
int main()
{
    map<int, int> mp;
    mp[0] = 1;
    mp[4] = 1;
    mp[8] = 1;
    mp[14] = 1;
    mp[20] = 1;
    for (int i = 0; i < 26; i++)
    {
        if (mp[i] != 1)
            mp[i] = 0;
    }
    int t;
    cin >> t;
    while (t--)
    {

        map<char, lli> cnt;
        lli n, same = 0, ans1 = 0, ans2 = 0, result = LLONG_MAX;
        string s, p;
        cin >> n >> s >> p;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != '?' && p[i] != '?' && s[i] != p[i])
            {
                if (mp[p[i]-'a'] == mp[s[i]-'a'])
                    ans1 += 2;
                else
                    ans1++;
            }
        }
        for (int alph = 0; alph < 26; alph++)
        {
            ans2 = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '?' && p[i] == '?');

                else if (s[i] == '?')
                {
                    if(alph==p[i]-'a')
                    ans2+=0;
                    else
                    if (mp[alph] == mp[p[i]-'a'])
                        ans2 += 2;
                    else
                        ans2++;
                }
                else if (p[i] == '?')
                {
                    if(alph==s[i]-'a')
                    ans2+=0;
                    else
                    if (mp[alph] == mp[s[i]-'a'])
                        ans2 += 2;
                    else
                        ans2++;
                }
            }
            result = min(result, ans1 + ans2);
        }
        // cout<<ans1<<" "<<ans2<<endl;
       cout<<result<<endl;
    }
    return 0;
}