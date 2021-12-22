// https://cses.fi/problemset/task/1194
#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define pii pair<int, int>
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define maxN
#define mod 1000000007
using namespace std;

char arr[1001][1001];
int vis[1001][1001];
int n, m;
int dirX[4] = {0, 0, -1, 1};
int dirY[4] = {1, -1, 0, 0};
char path[] = {'R', 'L', 'U', 'D'};
int dis[1001][1001];
char ans[1001][1001];
int surdis[1001][1001];
int startX, startY, endX=0, endY=0;

// for monster
bool isvalid(int x, int y)
{
    if (x < 1 || x > n || y < 1 || y > m)
        return false;
    if (vis[x][y] == 1 || arr[x][y] == '#' || arr[x][y] == 'M')
        return false;
    return true;
}

// for survivor
bool isvalid1(int x, int y, int time)
{
    if (x < 1 || x > n || y < 1 || y > m)
        return false;
    if (vis[x][y] == 1 || arr[x][y] == '#' || arr[x][y] == 'M' || dis[x][y] <= time)
        return false;
    return true;
}

void bfssurvior(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    vis[x][y] = 1;
    surdis[x][y] = 0;
    while (!q.empty())
    {
        int newX = q.front().first;
        int newY = q.front().second;
        q.pop();
        if (newX == 1 || newX == n || newY == 1 || newY == m)
        {
            endX = newX;
            endY = newY;
            return;
        }
        REP(i, 0, 4)
        {
            if (isvalid1(newX + dirX[i], newY + dirY[i], surdis[newX][newY] + 1))
            {
                q.push({newX + dirX[i], newY + dirY[i]});
                vis[newX + dirX[i]][newY + dirY[i]] = 1;
                surdis[newX + dirX[i]][newY + dirY[i]] = surdis[newX][newY] + 1;
                ans[newX + dirX[i]][newY + dirY[i]] = path[i];
            }
        }
    }
}

queue<pair<int, int>> qmonster;
void bfsmonster()
{
    int x = qmonster.front().first;
    int y = qmonster.front().second;
    vis[x][y] = 1;
    dis[x][y] = 0;
    while (!qmonster.empty())
    {
        x = qmonster.front().first;
        y = qmonster.front().second;
        qmonster.pop();
        for (int i = 0; i < 4; i++)
        {
            if (isvalid(x + dirX[i], y + dirY[i]))
            {
                vis[x + dirX[i]][y + dirY[i]]=1;
                dis[x + dirX[i]][y + dirY[i]] = min(dis[x][y] + 1, dis[x + dirX[i]][y + dirY[i]]);
                qmonster.push({x + dirX[i], y + dirY[i]});
            }
        }
    }
}
int main()
{

    map<char, int> move{{'R', 1}, {'L', 0}, {'U', 3}, {'D', 2}};
    cin >> n >> m;
    REP(i, 1, n + 1)
    {
        REP(j, 1, m + 1)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'A')
                startX = i, startY = j;
            if (arr[i][j] == 'M')
                qmonster.push({i, j});
            else
                dis[i][j] = INT_MAX;
        }
    }
    bfsmonster();

    memset(vis, 0, sizeof(vis));
    memset(ans,'0',sizeof(ans));
    // cout<<startX<<" "<<startY<<endl;
    bfssurvior(startX, startY);
    // cout<<endX<<" "<<endY<<endl;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=m;j++)
    //     cout<<ans[i][j]<<" ";
    //     cout<<endl;
    // }
    if (endX && endY)
    {
        cout << "YES" << endl;
        string s=""; 
        while (endX != startX || endY != startY)
        {
            s += ans[endX][endY];
            char step=ans[endX][endY];
            endX += dirX[move[step]];
            endY += dirY[move[step]];
            // cout<<endX<<" "<<endY<<endl;
        }
        cout << s.size() << endl;
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}