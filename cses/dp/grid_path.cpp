// https://cses.fi/problemset/task/1638
#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN 1001
#define mod 1000000007
using namespace std;
int dp[maxN][maxN];
void solve()
{
 
}
int main()
{
    int n;
    cin>>n;
    char val[n+1][n+1];
    REP(i,1,n+1)
    {
        REP(j,1,n+1)
        cin>>val[i][j];
    }
    

    dp[0][1]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(val[i][j]!='*')
            dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
        }
    }
    cout<<dp[n][n]<<endl;
    return 0;
}