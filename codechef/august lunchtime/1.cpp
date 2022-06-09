#include<bits/stdc++.h>
#define lli long long int
#define mp(x) make_pair(x)
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
        int n,k;
        cin>>n>>k;
        map<int ,vector<int>>m;
        int max=0;
        REP(i,1,n+1)
        {
            int a;
            cin>>a;
            m[a].pb(i);
            if(max<a)
            max=a;
        }
        int count=0;
        for(auto it=m[max].begin();it!=m[max].end();it++)
        {
              if(*it>=k)
              count+=(n+1)-(*it);
        }
        cout<<count<<endl;
    }
    return 0;
}