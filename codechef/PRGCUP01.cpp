// https://www.codechef.com/problems/PRGCUP01
#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
#define mod 1000000007
using namespace std;
int vis[9][9];
int dirX[]={-2,-2,-1,1,2,2,1,-1};
int dirY[]={1,-1,-2,-2,-1,1,2,2};
int dis[9][9];
bool isvalid(int x,int y)
{
    if(x<1||x>8||y<1||y>8)
    return false;
    if(vis[x][y]==1)
    return false;
    return true;
}
void bfs(int x,int y)
{
 queue<pair<int,int>>q;
 q.push({x,y});
 dis[x][y]=0;
 vis[x][y]=1;
 while(!q.empty())
 {
    pair<int,int> a=q.front();
    q.pop();
    for(int i=0;i<8;i++)
    {
        if(isvalid(a.first+dirX[i],a.second+dirY[i]))
        {
            dis[a.first+dirX[i]][a.second+dirY[i]]=dis[a.first][a.second]+1;
            q.push({a.first+dirX[i],a.second+dirY[i]});
            vis[a.first+dirX[i]][a.second+dirY[i]]=1;
        }
    }
 }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                vis[i][j]=0;
                dis[i][j]=0;
            }
        }
        string start,end;
        cin>>start>>end;
        int startX,startY,endX,endY;
        startX=start[0]-'a'+1;
        startY=start[1]-'0';
        endX=end[0]-'a'+1;
        endY=end[1]-'0';
        bfs(startX,startY);
        cout<<dis[endX][endY]<<endl;
    }
    return 0;
}