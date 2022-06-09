#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN int(1e5+1)
using namespace std;
vector<int> vec[maxN];
int vis[maxN],in[maxN],low[maxN],timer=0;
vector<pair<int,int>>vp;
bool bridge;
void dfs(int node,int par)
{
    vis[node]=1;
    in[node]=low[node]=timer;
    timer++;
    for(int child:vec[node])
    {
        if(child==par)
        continue;
        if(vis[child]==1)
        {
            
            low[node]=min(low[node],in[child]);
            if(in[node]>in[child])
            vp.pb(mp(node,child));
        }
        else
        {
            vp.pb(mp(node,child));
            dfs(child,node);
            if(in[node]<low[child])
            {
                bridge=true;
                return;
            }
            low[node]=min(low[node],low[child]);
        }
    }
    
}
int main()
{
    int n,m,a,b;
    cin>>n>>m;
    REP(i,0,m)
    {
        cin>>a>>b;
        vec[a].pb(b),vec[b].pb(a);
    }
    dfs(1,-1);
    if(bridge )
    {
        cout<<0;
    }
    else
    {
        for(int i=0;i<vp.size();i++)
        {
            cout<<vp[i].first<<" "<<vp[i].second<<endl;
        }
    }
    return 0;
}