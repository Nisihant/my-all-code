// https://cses.fi/problemset/task/1746
#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN 100002
#define maxM 102
#define mod 1000000007
using namespace std;
lli dp[maxN][maxM];
void solve()
{
 
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+1];
    REP(i,1,n+1) cin>>a[i];

    for(int i=1;i<=m;i++)
    if(a[1]==0||a[1]==i)
    dp[1][i]=1;


    REP(i,2,n+1)
    {
        REP(j,1,m+1)
        {
            if(a[i]==0||a[i]==j)
            {
                dp[i][j]=(dp[i-1][j-1]%mod+dp[i-1][j]%mod+dp[i-1][j+1]%mod)%mod;
            }
            else
            dp[i][j]=0;
            
        }
    }
    lli ans=0;
        for(int i=1;i<=m;i++)
        ans=(dp[n][i]+ans)%mod;
    
    cout<<ans<<endl;
    return 0;
}