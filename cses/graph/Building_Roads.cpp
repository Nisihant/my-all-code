// https://cses.fi/problemset/task/1666
#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
// #define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
#define mod 1000000007
using namespace std;
vector<int>vec[100001];
int vis[100001];

void dfs(int p)
{
    vis[p]=1;
    for(int child:vec[p])
    {
        if(vis[child]==0)
        {
            dfs(child);
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
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    int count=0;
    vector<int> arr;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            arr.push_back(i);
            count++;
            dfs(i);
        }
    }
    cout<<count-1<<endl;
    for(int i=1;i<arr.size();i++)
    cout<<arr[i-1]<<" "<<arr[i]<<endl;
    return 0;
}