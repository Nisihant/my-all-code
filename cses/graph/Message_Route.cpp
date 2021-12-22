// https://cses.fi/problemset/task/1667
#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
#define mod 1000000007
using namespace std;
vector<int>vec[100001];
int vis[100001];
int dis[100001];
void bfs(int x)
{
    queue<int>q;
    q.push(x);
    vis[x]=1;
    dis[x]=1;
    while(!q.empty())
    {
        int a=q.front();
        q.pop();
        for(int child:vec[a])
        {
            if(vis[child]==0)
            {
                vis[child]=1;
                dis[child]=dis[a]+1;
                q.push(child);
            }
        }
    }

}
int main()
{
    int n,m;
    cin>>n>>m;
    REP(i,0,m)
    {
        int a,b;
        cin>>a>>b;
        vec[a].pb(b);
        vec[b].pb(a);
    }
    bfs(1);
   if(vis[n]==1)
   {
        cout<<dis[n]<<endl;
        int check=n;
        vector<int>ans;
        ans.push_back(n);
        while(dis[check]>1)
        {
            for(int child:vec[check])
            {
                if(dis[child]<dis[check])
                {
                    ans.push_back(child);
                    check=child;
                    break;
                }
            }
        }
        reverse(ans.begin(),ans.end());
        for(int child:ans)
        cout<<child<<" ";
        cout<<endl;
   }  
   else
   cout<<"IMPOSSIBLE"<<endl;  
    return 0;
}