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
        int n;
        cin>>n;
        int a=1,ans=0;;
        while(a<=n)
        {
            a=a<<1;
        }
        a=a>>1;
        if(a|a-1<=n)
        ans=a<<1;
        else
        ans=a;
        cout<<ans<<endl;
    }
    return 0;
}