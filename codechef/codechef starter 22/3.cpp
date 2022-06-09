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
 int n;
 cin>>n;
 if(n==2)
 cout<<"NO"<<endl;
 else
 if(n%2)
 {
     cout<<"YES"<<endl;
     for(int i=1;i<=n/2;i++)
     cout<<i<<" ";

     cout<<n<<" ";

     for(int i=n-1;i>n/2;i--)
     cout<<i<<" ";

     cout<<endl;
 }
 else
 {
     cout<<"YES"<<endl;
     cout<<(n/2)<<" ";
     for(int i=1;i<(n/2);i++)
     cout<<i<<" ";

     for(int i=n;i>(n/2);i--)
     cout<<i<<" ";

     cout<<endl;
 }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}