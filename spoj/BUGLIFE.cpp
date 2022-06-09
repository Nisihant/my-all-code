#include<bits/stdc++.h>
#define pb(x) push_back(x);
using namespace std;
vector<int> arr[2001];
int vis[100001];
vector<int> arr[100001];
bool dfs(int node, int c)
{
    vis[node]=1;
    col[node]=c;
    for(int i=0;i<arr[node].size();i++)
    {
        int child=arr[node][i];
        if(vis[child]==0)
        {
              if(dfs(child,c^1)==false)
              {
                  return false;
              }
        }
        else
        if(col[node]==col[child])
        return false;
    }
    return true;
}
int main()
{
    int n,m,t;
    cin>>t;
    int temp=1;
    while(temp<=t)
    {
        cin>>n>>m;
        for(int i=0;i<=n;i++)
        {
            vis[i]=0;
            arr[i].clear();
        }
        for(int i=1;i<=m;i++)
        {
            int x,y;
            cin>>x>>y;
            arr[x].pb(y);
            arr[y].pb(x);
        }
        bool res=true;
        for(int i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                if(dfs(i,0)==false)
                {
                    res=false;
                    break;
                }
            }
        }
            cout<<"Scenario #"<<temp<<":"<<endl;
            temp++;
            if(!res)
            {
                cout<<"Suspicious bugs found!"<<endl;
            }
            else
            cout<<"No suspicious bugs found!"<<endl;

    }

}