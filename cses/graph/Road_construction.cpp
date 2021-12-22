// https://cses.fi/problemset/task/1676
#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN 100001
#define mod 1000000007
using namespace std;

int _rank[maxN];
int par[maxN];

int find(int a)
{
 if(par[a]==-1)
 return a;
 return par[a]=find(par[a]);
}

int merge(int a,int b)
{
    int pa=find(a);
    int pb=find(b);
    if(_rank[pa]<_rank[pb]) swap(pa,pb);

    par[pb]=pa;
    _rank[pa]=_rank[pa]+_rank[pb];
    return _rank[pa];
}
int main()
{

    int n,m,cc,mx=1;
    cin>>n>>m;
    for(int i=0;i<=n;i++) _rank[i]=1,par[i]=-1;
    cc=n;
    REP(i,0,m)
    {
        int a,b;
        cin>>a>>b;
       
       if(find(a)!=find(b))
       {
           mx=max(mx,merge(a,b));
           cc--;
       }
       cout<<cc<<" "<<mx<<endl;
    }
    return 0;
}