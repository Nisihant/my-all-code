// https://www.codechef.com/START15B/problems/MINSZ
#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define pii pair<int, int>
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define maxN
#define mod 1000000007
using namespace std;
vector<lli> vec;
lli power[61];
void solve(lli c)
{
    if (c == 0)
    {
        cout << 2 << endl;
        cout << 1 << " " << 1 << endl;
    }
    else
    {
        while (c > 0)
        {
            lli temp = c, bitcount = 0;
            while (temp > 0)
            {
                bitcount++;
                temp = temp >> 1;
            }
            lli num = power[bitcount];
            vec.pb(num);
            c=c^num;
        }
        cout << vec.size() << endl;
        for (auto it : vec)
            cout << it << " ";
        cout << endl;
    }
}
int main()
{
    lli p=1;
    power[0]=1;
    for(int i=1;i<61;i++)
    {
        p*=2;
        power[i]=p-1;
    }
    int t;
    cin >> t;
   
    while (t--)
    {
        vec.clear();
        lli c;
        cin >> c;
        solve(c);
    }
    return 0;
}