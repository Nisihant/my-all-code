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
    while(t--)
    {
        int n;
        cin>>n;
        unordered_map<int,int>m;
        REP(i,0,n)
        {
            int a;
            cin>>a;
            m[a]++;
        }
        lli ans=0;
        for(auto it=m.begin();it!=m.end();it++)
        {
            ans+=min(it->first-1,it->second);
        }
        cout<<ans<<endl;
    }
    return 0;
}   