#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN int(1e6+1)
using namespace std;
vector<int> vec[maxN];
unordered_map<int,int> dic;
int vis[maxN];
void dfs(int node,int cur_cnt)
{
    vis[node]=1;
    dic[node]=cur_cnt;
    for(int child:vec[node])
    {
        if(vis[child]==0)
        dfs(child,cur_cnt);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        dic.clear();
        int n,k,a,b,cur_cnt=0;
        cin>>n>>k;
        for(int i=0;i<=n;i++) vec[i].clear(),vis[i]=0;
        
        vector<pair<int,int>> p;
        string s;
        while(k--)
        {
            cin>>a>>s>>b;
            if(s=="=")
            {
                vec[a].pb(b),vec[b].pb(a);
            }
            else
            {
                p.pb(mp(a,b));
            }

        }
        for(int i=1;i<=n;i++)
        {
           if(vis[i]==0)
           {
                cur_cnt++;
                dfs(i,cur_cnt);
           }
        }
        bool flag =true;
        for(int i=0;i<p.size();i++)
        {
            if(dic[p[i].first]==dic[p[i].second])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
    return 0;
}