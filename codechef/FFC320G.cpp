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
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        pair<int,char>dp[n+1][m+1];
        int arr[n][m];
        REP(i,0,n)
        {
            REP(j,0,m)
            {
                cin>>arr[i][j];
            }
        }
        
REP(i,0,n+1) dp[i][m]={INT_MAX,'z'+1};
REP(i,0,m+1) dp[n][i]={INT_MAX,'z'+1};
dp[n-1][m].first=0;
dp[n][m-1].first=0;

REP(i,0,n)
{
    string s;
    cin>>s;
    REP(j,0,s.size())
    {
        dp[i][j].second=s[j];
    }
}

for(int i=n-1;i>=0;i--)
{
    for(int j=m-1;j>=0;j--)
    {
        dp[i][j].first=arr[i][j] + min(dp[i+1][j].first,dp[i][j+1].first);
    }
}
cout<<dp[0][0].first<<endl;

string ans="";
 ans.push_back(dp[0][0].second);
int i=0,j=0;
        while(i<n-1 || j<m-1) {
            if(dp[i][j+1]<dp[i+1][j]) {
                ans.push_back(dp[i][j+1].second);
                j++;
            }
            else {
                ans.push_back(dp[i+1][j].second);
                i++;
            }
        }
cout<<ans<<endl;
    }
    return 0;
}