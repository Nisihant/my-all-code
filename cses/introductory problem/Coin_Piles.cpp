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
    int t;
    cin>>t;
    while(t--)
    {
        lli a,b;
        cin>>a>>b;
        lli mn=min(a,b),mx=max(a,b);

        if((a+b)%3==0 && (mn*2>=mx))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}