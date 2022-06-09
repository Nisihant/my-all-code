#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define REPR(i, s, n) for (lli i = n-1; i>=s; i--)
#define maxN
#define mod 1000000007
using namespace std;
void solve()
{
 
}
int main()
{
    lli n;
    cin>>n;
    lli total=(n*(n+1))/2;
    lli sum=0;
    REP(i,1,n){
        int a;
        cin>>a;
        sum+=a;
    }
    lli ans=total-sum;
    cout<<ans<<endl;
    return 0;
}