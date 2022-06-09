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
void greatY(lli a,lli b)
{
    lli ans;
    if(a%2)
    {
        ans=((a-1)*(a-1)+b);
    }
    else
    {
        ans=(a*a-b+1ll);
    }
    cout<<ans<<endl;
}
void greatX(lli a,lli b)
{
    lli ans;
    if(b%2)
    {
        ans=(b*b-a+1ll);
    }
    else
    {
        ans=((b-1)*(b-1)+a);
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        lli y,x;
        cin>>y>>x;
        if(y>=x)
        greatY(y,x);
        else
        greatX(y,x);
    }
    return 0;
}