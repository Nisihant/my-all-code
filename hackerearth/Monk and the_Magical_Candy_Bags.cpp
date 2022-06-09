#include<bits/stdc++.h>
#define lli long long int
#define make_pair mp
#define push_back pb
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
using namespace std;
void solve()
{
    lli n,k;
    lli count=0;
    cin>>n>>k;
    priority_queue<lli>pq;
    for(int i=0;i<n;i++)
    {
        lli a;
        cin>>a;
        pq.push(a);
    }
    for(lli i=1;i<=k;i++)
    {
        lli top=pq.top();
        count+=top;
        pq.pop();
        pq.push(top/2);
    }
    cout<<count<<endl;
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