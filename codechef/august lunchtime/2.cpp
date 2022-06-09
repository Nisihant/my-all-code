#include<bits/stdc++.h>
#define lli long long int
#define mp(x) make_pair(x)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
using namespace std;
int vis[100001];
vector<int> arr[100001];
void dfs(int node)
{
	vis[node]=1;
	for(int i=0;i<arr[node].size();i++)
	{
		if(vis[arr[node][i]]==0)
		{
			dfs(arr[node][i]);
		}
	}
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        REP(i,0,100001)
        {
            vis[i]=0;
             arr[i].clear();
        }
       
        int n;
        cin>>n;
        int a[n+1];
        REP(i,1,n+1)
        cin>>a[i];
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(j-i!=a[j]-a[i])
                arr[i].pb(j);
                arr[j].pb(i);
            }
        }
        int count_cc=0;
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0)
		{
			dfs(i);
			count_cc++;
		}
	}
        cout<<count_cc<<endl;
    }
    return 0;
}