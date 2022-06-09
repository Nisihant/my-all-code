#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
using namespace std;
void solve()
{
 
}
int main()
{
    int n,d;
    cin>>n>>d;
    int a[n];
    REP(i,0,n) cin>>a[i];
    int ans[n];
    for(int i=0;i<n;i++)
    {
        ans[i]=a[(i+d)%n];
    }
  REP(i,0,n)
  cout<<ans[i]<<" ";
    return 0;
}