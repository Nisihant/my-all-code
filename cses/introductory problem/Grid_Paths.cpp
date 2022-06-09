#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define REPR(i, s, n) for (lli i = n - 1; i >= s; i--)
#define maxN
#define mod 1000000007
using namespace std;
int dirX[4] = {1, 0, 0, -1};
int dirY[4] = {0, 1, -1, 0};
char move[4] = {'D', 'U', 'D', 'L'};
int endX=6, endY = 0, ans = 0,sz;
bool visited[7][7];
string s;
void solve()
{
}
bool isvalid(int x, int y)
{
    if (x < 0 || y < 0 || x >= 7 || y >= 7 || visited[x][y] == true)
        return false;

    return true;
}

void valid_path( int startX, int startY, int ind,int totalmove)
{
    if (startX == endX && startY == endY && totalmove == -1 )
    {
        ans++;
        return;
    }

    // if(ind==47)
    // return;
    if (s[ind] == '?')
    {
        for (int i = 0; i < 4; i++)
        {
            if (isvalid(startX + dirX[i], startY + dirY[i]))
            {
                visited[startX + dirX[i]][startY + dirY[i]] = true;
                valid_path(startX + dirX[i], startY + dirY[i], ind + 1,totalmove-1);
                visited[startX + dirX[i]][startY + dirY[i]] = false;
            }
        }
    }
    else
    if (s[ind] == 'D')
    {
        if (isvalid(startX + 1, startY))
        {
            visited[startX + 1][startY] = true;

            valid_path(startX + 1, startY, ind + 1,totalmove-1);
            visited[startX + 1][startY] = false;
        }
    }
    else
    if (s[ind] == 'R')
    {
        if (isvalid(startX, startY + 1))
        {
            visited[startX][startY + 1] = true;
            valid_path(startX, startY + 1, ind + 1,totalmove-1);
            visited[startX][startY + 1] = false;
        }
    }
    else
    if (s[ind] == 'L')
    {
        if (isvalid(startX, startY - 1))
        {
            visited[startX][startY - 1] = true;

            valid_path(startX, startY - 1, ind + 1,totalmove-1);
            visited[startX][startY - 1] = false;
        }
    }
    else
    if (s[ind] == 'U')
    {
        if (isvalid(startX - 1, startY))
        {
            visited[startX - 1][startY] = true;

            valid_path( startX - 1, startY, ind + 1,totalmove-1);
            visited[startX - 1][startY] = false;
        }
    }
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        cin >> s;
        visited[0][0]=true;
        valid_path(0, 0, 0,47);

        cout<<ans<<endl;
    }
    return 0;
}