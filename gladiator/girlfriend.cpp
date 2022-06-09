#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli max(lli a,lli b)
{
    if(a>b)
    return a;
    else return b;
}
struct edage
{
    lli a;
    lli b;
    lli c;
};
edage arr[50001];
lli par[50001];

lli dist[1000001];

vector<pair<lli ,lli >> temp[50001];

void dfs(lli node = 1, lli par = -1)
{
    for(pair<int,int> child: temp[node])
    {
        if(child.first == par)continue;
        dist[child.first] = max(0,child.second - dist[node]) + dist[node];
        dfs(child.first,node);
    }
}
bool comp(edage a,edage b)
{
    if(a.c<b.c)
    return true;
    else
     return false;

}
lli find(lli a)
{
    if(par[a]==-1) return a;
    return par[a]=find(par[a]);
}
void merge(lli a,lli b)
{
   if(par[a]>par[b])
   swap(a,b);

   par[a]+=par[b];
   par[b]=a;
}
int main()
{
    lli n,m,a,b,c;
    cin>>n>>m;
    for(lli i=1;i<=n;i++)
    {
    par[i]=-1;
    dist[i]=LLONG_MAX;
    }
    for(lli i=1;i<=m;i++)
    {
        cin>>a>>b>>c;
        arr[i].a=a;
        arr[i].b=b;
        arr[i].c=c;
    }
    sort(arr+1,arr+m+1,comp);
    for(lli i=1;i<=m;i++)
    {
        a=find(arr[i].a);
        b=find(arr[i].b);
        if(a!=b)
        {
            merge(a,b);
            temp[arr[i].a].push_back({arr[i].b,arr[i].c});
            temp[arr[i].b].push_back({arr[i].a,arr[i].c});
        }
    }
   dist[1]=0;
   dfs();
    if(dist[n]==LLONG_MAX)
    cout<<"NOT POSSIBLE";
    else
    cout<<dist[n];
}
