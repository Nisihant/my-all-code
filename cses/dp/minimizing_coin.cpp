// https://cses.fi/problemset/task/1634
#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN 1000001
#define mod 1000000007
using namespace std;
int dp[maxN];
void solve()
{
 
}
int main()
{
    int coinsize,total;
    cin>>coinsize>>total;
    int coin[coinsize];
    REP(i,0,coinsize) cin>>coin[i];
    REP(i,0,total+1) dp[i]=INT_MAX;
    dp[0]=0;
    sort(coin,coin+coinsize);
    for(int i=1;i<=total;i++)
    {
        int j=0;
        // dp[i]=INT_MAX;
        while(coin[j]<=i&&j<coinsize)
        {
            if(dp[i-coin[j]]!=INT_MAX)
            {
                dp[i]=min(dp[i],1+dp[i-coin[j]]);
            }
            j++;
        }
    }
    if(dp[total]!=INT_MAX)
    cout<<dp[total]<<endl;
    else
    cout<<-1<<endl;
    return 0;
}