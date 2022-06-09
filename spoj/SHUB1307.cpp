//https://www.spoj.com/problems/SHUB1307/
#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
#define mod 1000000007
using namespace std;
void solve()
{
 
}
int main()
{
    int t,n,m,k,inf=60;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        int arr[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            cin>>arr[i][j];
        }
        int dp[n+1][m+1];
        for(int i=0;i<n+1;i++) dp[i][m]=inf;
        for(int i=0;i<m+1;i++) dp[n][i]=inf;
        dp[n][m]=0;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                int minc=dp[i+1][j+1];
                minc=min(dp[i+1][j],minc);
                minc=min(dp[i][j+1],minc);
                dp[i][j]=arr[i][j]+minc;
            }
        }
        if(dp[0][0]<=k)
        cout<<dp[0][0]<<endl;
        else
        cout<<-1<<endl;

    }
    return 0;
}