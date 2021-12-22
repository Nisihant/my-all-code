// https://cses.fi/problemset/task/1635
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
    int size,total;
    cin>>size>>total;
    int coin[size];
    REP(i,0,size) cin>>coin[i];
    
    sort(coin,coin+size);
    dp[0]=1;

    for(int i=1;i<=total;i++)
    {
        int j=0;
        while(j<size&&coin[j]<=i)
        {
            dp[i]=(dp[i-coin[j]]+dp[i])%mod;
            j++;
        }

    }
   cout<<dp[total]<<endl;
    return 0;
}