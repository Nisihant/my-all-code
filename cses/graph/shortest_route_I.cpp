// https://cses.fi/problemset/task/1671
#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN 100001
#define mod 1000000007
using namespace std;
vector<pair<int,int>>vec[maxN];
int dis[maxN];
void dfs(int node)
{
    for(auto child:vec[node])
    {
        dis[child.first]=min(dis[child.first],dis[node]+child.second);
    }
 
}
int main()
{
    int n,m;
    cin>>n>>m;
    REP(i,0,m)
    {
        int a,b,c;
        cin>>a>>b>>c;
        vec[a].push_back({b,c});
    }
    for(int i=0;i<=n;i++)
    dis[i]=INT_MAX;
    dis[1]=0;
    for(int i=1;i<=n;i++)
    {
        dfs(i);
    }
    for(int i=1;i<=n;i++)
    {
        dfs(i);
    }
    for(int i=1;i<=n;i++)
    cout<<dis[i]<<" ";
    cout<<endl;
    return 0;
}