// https://cses.fi/problemset/task/1192
#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
#define mod 1000000007
using namespace std;
char arr[1001][1001];
bool vis[1001][1001];
int N,M;
int dirX[4]={0,0,-1,1};
int dirY[4]={1,-1,0,0};
bool isvalid(int x,int y)
{
    if(x<1||x>N||y<1||y>M) return false;
    if(vis[x][y]==true||arr[x][y]=='#') return false;
    return true;
}
void dfs(int x,int y)
{
    vis[x][y]=true;
    for(int i=0;i<4;i++)
    {
        if(isvalid(x+dirX[i],y+dirY[i]))
        dfs(dirX[i]+x,dirY[i]+y);
    }
}
int main()
{
    cin>>N>>M;
    REP(i,1,N+1)
    {
        REP(j,1,M+1)
        cin>>arr[i][j];
    }
    int count=0;
    REP(i,1,N+1)
    {
        REP(j,1,M+1)
        {
            if(vis[i][j]==false&&arr[i][j]=='.')
            {
                dfs(i,j);
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}