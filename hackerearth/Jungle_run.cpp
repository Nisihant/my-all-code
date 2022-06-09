// https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/jungle-run/
#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define pii pair<int, int>
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define maxN
#define mod 1000000007
using namespace std;
char arr[31][31];
int vis[31][31];
int dis[31][31];
int N;
int dirX[] = {0, 0, -1, 1};
int dirY[] = {1, -1, 0, 0};

bool isvalid(int x, int y)
{
    if (x < 1 || x > N || y < 1 || y > N)
        return false;
    if (arr[x][y] == 'T' || vis[x][y] == 1)
        return false;
    return true;
}
void bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    vis[x][y] = 1;
    dis[x][y] = 0;
    while (!q.empty())
    {
        pair<int, int> a = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            if (isvalid(a.first + dirX[i], a.second + dirY[i]))
            {
                dis[a.first + dirX[i]][a.second + dirY[i]] = dis[a.first][a.second] + 1;
                vis[a.first + dirX[i]][a.second + dirY[i]] = 1;
                q.push({a.first + dirX[i], a.second + dirY[i]});
            }
        }
    }
}
int main()
{
    int startX, startY, endX, endY;
    cin >> N;
    REP(i, 1, N + 1)
    {
        REP(j, 1, N + 1)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'S')
                startX = i, startY = j;
            if (arr[i][j] == 'E')
                endX = i, endY = j;
        }
    }
    bfs(startX, startY);
    cout << dis[endX][endY] << endl;
    // for(int i=1;i<=N;i++)
    // {
    //     for(int j=1;j<N+1;j++)
    //     cout<<dis[i][j]<<" ";
    //     cout<<endl;
    // }
    return 0;
}