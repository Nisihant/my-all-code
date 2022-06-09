#include<bits/stdc++.h>
#define lli long long int
#define mp(x) make_pair(x)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
using namespace std;
int vis[10000];
vector<int> vec[10000];
vector<int> prime;
int dist[10000];
bool isvalid(int a,int b)
{
    int count=0;
    while(a>0&&b>0)
    {
        if(a%10!=b%10)
        count++;
        a/=10;
        b/=10;
    }
    if(count==1)
    return true ;
    else
    return false;
}
bool isprime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
void graph()
{
    for(int i=1000;i<=9999;i++)
    {
        if(isprime(i)) prime.pb(i);
    }
    for(int i=0;i<prime.size();i++)
    {
        for(int j=i+1;j<prime.size();j++)
        {
            int a=prime[i],b=prime[j];
            if(isvalid(a,b))
            {
                vec[a].pb(b);
                vec[b].pb(a);
            }
        }
    }
}
void bfs(int a)
{
    vis[a]=1;
    dist[a]=0;
    queue<int> q;
    q.push(a);
    while(!q.empty())
    {
        int curr=q.front();
        q.pop();
        for(int child:vec[curr])
        {
            if(vis[child]==0)
            {
                vis[child]=1;
                dist[child]=dist[curr]+1;
                q.push(child);

            }
        }
    }
}
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        for(int i=1000;i<=9999;i++)
        {
            vis[i]=0;
            vec[i].clear();
            dist[i]=-1;
        }
        graph();
        bfs(a);
        if(dist[b]==-1)
        cout<<"Impossible"<<endl;
        else
        cout<<dist[b]<<endl;
    }
    return 0;
}