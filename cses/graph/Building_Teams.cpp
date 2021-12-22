// https://cses.fi/problemset/task/1668
#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
#define mod 1000000007
using namespace std;
vector<int> arr[100001];
int vis[100001];
int ans[100001];
bool bfs(int node)
{
    queue<int>q;
    q.push(node);
    vis[node]=1;
    ans[node]=1;
    while(!q.empty())
    {
        int a=q.front();
        q.pop();
        for(int child:arr[a])
        {
            if(vis[child]==0)
            {
                ans[child]=ans[a]^1;
                vis[child]=1;
                q.push(child);
            }
            else
            {
                if(ans[child]==ans[a])
                return true;
            }
        }
    }
    return false;

}

int main()
{
    int n,m;
    cin>>n>>m;
    REP(i,0,m)
    {
        int a,b;
        cin>>a>>b;
        arr[a].pb(b);
        arr[b].pb(a);
    }
    bool cyclecheck=false;
    REP(i,1,n+1)
    {
        if(vis[i]==0)
        {
            if(bfs(i))
            {
                cyclecheck=true;
                break;
            }
        }
    }
    if(cyclecheck)
    cout<<"IMPOSSIBLE"<<endl;
    else
    {
        
        for(int i=1;i<=n;i++)
        {
            if(ans[i]==1)
            cout<<1<<" ";
            else
            cout<<2<<" ";
        }
        cout<<endl;
    }
    return 0;
}