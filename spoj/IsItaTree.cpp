#include <bits/stdc++.h>
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
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int x,y;
		cin>>x>>y;
		arr[x].push_back(y);
		arr[y].push_back(x);
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
	if(count_cc==1&&(n-m)==1)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}