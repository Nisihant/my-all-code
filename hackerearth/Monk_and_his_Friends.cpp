#include<bits/stdc++.h>
#define lli long long int
#define make_pair mp
#define push_back pb
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    unordered_map<lli,lli> um;
    REP(i,0,n)
    {
        lli a;
        cin>>a;
        um[a]++;
    }
    REP(i,0,m)
    {
        lli a;
        cin>>a;
        if(um[a]!=0)
        cout<<"YES"<<endl,um[a]++;
        else
        cout<<"NO"<<endl,um[a]++;
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