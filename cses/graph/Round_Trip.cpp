// https://cses.fi/problemset/task/1669
#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define pii pair<int, int>
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define maxN
#define mod 1000000007
using namespace std;
vector<int> arr[100001];
int vis[100001];
vector<int>ans;
bool dfs(int node, int parentNode)
{
    vis[node] = 1;
    ans.pb(node);
    for (int child : arr[node])
    {
        if (vis[child] == 0)
        {
            if (dfs(child, node) == true)
            {
                return true;
            }
        }
        else
        {
            if (child != parentNode)
            {
                ans.pb(child);
                return true;
            }
        }
    }
    ans.pop_back();
    return false;
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a].pb(b);
        arr[b].pb(a);
    }
    bool check=false;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            
            if(dfs(i,i))
            {
                check=true;
                break;
            }
        }
    }
    if(check)
    {
      int end=ans.size()-1;
      int start=-1;
      for(int i=0;i<ans.size();i++)
      {
          if(ans[end]==ans[i])
          {
              start=i;
              break;
          }
      }
      cout<<end-start+1<<endl;
      for(int i=start;i<=end;i++)
      cout<<ans[i]<<" ";
    }
    else
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}