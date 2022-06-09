// https://cses.fi/problemset/task/1671
#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN 100001
#define mod 1000000007
using namespace std;
vector<pair<lli,lli>>vec[maxN];
lli dis[maxN];

int main()
{
    int n,m;
    cin>>n>>m;
    REP(i,0,m)
    {
        lli a,b,c;
        cin>>a>>b>>c;
        vec[a].push_back({b,c});
    }
    for(int i=0;i<=n;i++)
    dis[i]=LLONG_MAX;
    priority_queue<pair<lli,lli>,vector<pair<lli,lli>>,greater<pair<lli,lli>>> pq;
    pq.push({0,1});
    dis[1]=0;

    while(!pq.empty())
    {
        lli curNode=pq.top().second;
        lli curDis=pq.top().first;
        pq.pop();
        if(curDis!=dis[curNode]) continue;
        for(pair<lli,lli> ele:vec[curNode])
        {
            if(curDis+ele.second<dis[ele.first])
            {
                dis[ele.first]=curDis+ele.second;
                pq.push({dis[ele.first],ele.first});
            }
        }
    }
    for(int i=1;i<=n;i++)
    cout<<dis[i]<<" ";
    return 0;
}