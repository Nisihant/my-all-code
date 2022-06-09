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
    int t;
    cin>>t;

    while(t--)
    {
        lli n,s,m;
        cin>>n>>s;
        if(n%2==1)
         m=n/2+1;
         else
         m=n/2;

            m=m-1;
       
        lli ans=(s)/(n-m);
        cout<<ans<<endl;
    }
    return 0;
}