#include<bits/stdc++.h>
#define lli long long int
#define make_pair mp
#define push_back pb
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
    unordered_map<lli,lli>m;
    while(t--)
    {
        m.clear();
        lli n;
        cin>>n;
        REP(i,0,n)
        {
            lli a;
            cin>>a;
            m[a]++;
        }
        lli res=n*(n-1);
        for(auto it=m.begin();it!=m.end();it++)
        {
            res=res-((it->second)*((it->second)-1));

        }
        cout<<res<<endl;
    }
    return 0;
}