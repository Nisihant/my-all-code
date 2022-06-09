// https://www.codechef.com/INFI21B/problems/DALGONA
#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
#define mod 1000000007
using namespace std;
map<lli,lli>mp;
void solve()
{
    lli n,m=9;
    cin>>n;
        for(int i=1;i<=min(m,n);i++)
        mp[i]=1;
    if(n>9)
    mp[n-9]+=(n+9);

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        mp.clear();
        solve();
        cout<<mp.size()<<endl;
        for(auto it=mp.begin();it!=mp.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}