// https://www.spoj.com/problems/TOPOSORT/
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
vector<int>ans;
int in[10001];
void solve(int n)
{
    priority_queue<int,vector<int>,greater<int>> q;
 for(int i=1;i<=n;i++)
 {
     if(in[i]==0)
     q.push(i);
 }
 while(!q.empty())
 {
     int a=q.top();
    ans.pb(a);
    q.pop();
    for(int ele:vec[a])
    {
        in[ele]--;
        if(in[ele]==0)
        q.push(ele);
    }
   
 }
  if(ans.size()==n)
    {
        for(int ele:ans)
        cout<<ele<<" ";
        cout<<endl;
    }
    else 
    cout<<"Sandro fails."<<endl;
}
int main()
{
    int n,m;
    cin>>n>>m;
    ans.clear();
    REP(i,0,n+1)
    vec[i].clear();

    REP(i,0,m)
    {
        int x,y;
        cin>>x>>y;
        vec[x].pb(y);
        in[y]++;
    }
    solve(n);
    return 0;
}