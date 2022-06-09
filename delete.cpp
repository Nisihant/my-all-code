#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define REPR(i, s, n) for (lli i = n - 1; i >= s; i--)
#define maxN 100000000
#define mod 1000000007
using namespace std;
lli fact[15], dp[maxN];
void precal()
{
    fact[0] = 1;
    for (int i = 1; i < 15; i++)
    {
        fact[i] = i * fact[i - 1];
    }

    lli i = 1;
    while (i <= maxN)
    {
        dp[i] = 1;
        i *= 2LL;
    }
    i=0;
    while(fact[i]<=maxN)
    {
        dp[fact[i]]=1;
        i++;
    }
}
void dpfill()
{
    for(int i=1;i<maxN;i++)
    {
        if(dp[i]==0)
        {
            int j=1;
            while(i>=fact[j])
            {
                j++;
            }
            dp[i]=1+dp[i-j];
        }
    }
}
lli solve()
{
    lli n;
    cin >> n;
    lli ans=0;
    if(n%2)
    {
        n-=1;
        ans+=1;
    }

    if(__builtin_popcount(n)==1)
    return ans+1;

    int j=1;
    while(fact[j]<=n)
    {
        j++;
    }
    return 1+dp[n-fact[j-1]];

}
int main()
{
    precal();
    dpfill();
    // for(int i=1;i<15;i++)
    // cout<<dp[i]<<" ";
    int t;
    cin >> t;

    while (t--)
    {
    cout<<solve()<<endl;

    }
    return 0;
}