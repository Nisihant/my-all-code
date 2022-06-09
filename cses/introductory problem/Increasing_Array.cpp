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
    int n;
    cin>>n;
    int a;
    cin>>a;
    lli ans=0;
    n-=1;
    while(n--)
    {
        int b;
        cin>>b;
        if(b<a)
        ans+=(a-b);
        else
        a=b;
    }
    cout<<ans<<endl;
    return 0;
}