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
char move[4] = {'D', 'R', 'L', 'U'};
bool visited[100000];
void solve()
{
}

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}

int main()
{
    int t = 1;
    //  cin>>t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int apart[n], plot[m];
        REP(i, 0, n)
            cin >> apart[i];
        REP(i, 0, m)
            cin >> plot[i];

        sort(apart, apart + n);
        sort(plot, plot + m);

        int p = 0, a = 0;
        int ans = 0 ;
        while (p < m && a < n)
        {
            if (plot[p] - k <= apart[a] && plot[p] + k >=  apart[a])
            {
                ans++;
                p++;
                a++;
            }
            else if (apart[a] < plot[p])
                a++;
            else if (apart[a] > plot[p])
                p++;
        }
        cout << ans << endl;
    }
    return 0;
}
