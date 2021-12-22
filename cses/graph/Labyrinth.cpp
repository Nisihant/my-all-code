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
char arr[1001][1001];
int vis[1001][1001];
int dis[1001][1001];
int N,M;
int dirX[] = {0, 0, -1, 1};
int dirY[] = {1, -1, 0, 0};
char path[]={'L','R','D','U'};
bool isvalid(int x, int y)
{
    if (x < 1 || x > N || y < 1 || y > M)
        return false;
    if (arr[x][y] == '#' || vis[x][y] == 1)
        return false;
    return true;
}
bool isvalid2(int x, int y)
{
    if (x < 1 || x > N || y < 1 || y > M)
        return false;
    if (arr[x][y] == '#')
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
    cin >> N>>M;
    REP(i, 1, N + 1)
    {
        REP(j, 1, M + 1)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'A')
                startX = i, startY = j;
            if (arr[i][j] == 'B')
                endX = i, endY = j;
        }
    }
    bfs(startX, startY);
    if(dis[endX][endY]!=0)
    {
        cout<<"YES"<<endl;
        cout << dis[endX][endY] << endl;
         string s;
 
        while (dis[endX][endY])
        {
            // cout << ex << " " << ey << endl;
            for (int i = 0; i < 4; i++)
            {
                if (isvalid2(endX + dirX[i], endY + dirY[i]))
                {
                    if (dis[endX][endY] > dis[endX + dirX[i]][endY + dirY[i]])
                    {
                       
                       s.push_back(path[i]);
 
                        endX= endX + dirX[i], endY = endY + dirY[i];
                    }
                }
            }
        }
        reverse(s.begin(), s.end());
        cout << s;
    }
    else
    cout<<"NO"<<endl;
    return 0;
}