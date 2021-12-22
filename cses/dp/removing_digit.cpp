// https://cses.fi/problemset/task/1637
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
vector<int> d;
void digit(int a)
{
    d.clear();
  while(a>0)
  {
      if(a%10!=0)
      d.pb(a%10);
      a/=10;
  }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=9;i++) dp[i]=1;
    for(int i=10;i<=n;i++) dp[i]=INT_MAX;

    for(int i=10;i<=n;i++)
    {
        digit(i);
        for(auto ele:d)
        {
            dp[i]=min(dp[i],1+dp[i-ele]);
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}