// https://cses.fi/problemset/task/1636
#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN 1000001
#define mod 1000000007
using namespace std;
int dp[101][maxN];
void solve()
{
 
}
int main()
{
    int size,total;
    cin>>size>>total;
    int coin[size+1];
    REP(i,1,size+1) cin>>coin[i];

    
    for(int i=0;i<=size;i++) dp[i][0]=1;

    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=total;j++)
        {
            if(coin[i]<=j)
            dp[i][j]=(dp[i][j-coin[i]]+dp[i-1][j])%mod;
            else
            dp[i][j]=dp[i-1][j]%mod;
        }
    }
    cout<<dp[size][total]<<endl;
    return 0;
}