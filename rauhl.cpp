#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define REPR(i, s, n) for (lli i = n - 1; i >= s; i--)
#define maxN
#define mod 1000000007
using namespace std;
void solve()
{
}
lli fact(lli a,lli b)
{
    lli ans=1;
    for(int i=a;i>b;i--)
    ans*=a;
    for(int i=1;i<=(a-b);i++)
    ans/=i;
    return ans;
}
lli comb(lli n, lli r)
{
    return fact(n,max(r,n-r));
}
int main()
{
    // int t;
    //  cin>>t;
    // while(t--){
    //}
    lli n;
    cin >> n;
    lli r;
    cin >> r;
    string given;
    cin >> given;

    vector<string> vec;
    string s = "";
    for (lli i = 0; i < given.size(); i++)
    {
        if (given[i] != ',')
            s += given[i];
        else
        {
            vec.pb(s);
            s.clear();
        }
    }
    vec.push_back(s);
    lli sz = 0;
    lli minus = 1;
    while ((r - minus) > 0)
    {
        r -= minus;
        minus = (minus * (n - sz)) / (sz + 1);
        sz++;
    }
    lli i = 0;
    while ((r - minus) > 0)
    {
        r -= minus;
        minus = (minus * (n - sz)) / (sz + 1);
        sz++;
    }
    vector<lli> ret;

    for (lli i = 0; i < n; i++)
    {
        if (sz == 1)
        {
            i--;
            while (r > 0)
            {
                i++;
                r--;
            }
            ret.push_back(i);
            break;
        }
        if (r > comb(n - i - 1, sz - 1))
        {
            r -= comb(n - i - 1, sz - 1);
           
        }
        else
        {
            ret.push_back(i);
            sz--;
        }
    }
    for(int i=0;i<ret.size()-1;i++) cout<<vec[ret[i]]<<",";
    cout<<vec[ret[i]];
    return 0;
}   