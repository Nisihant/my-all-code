#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define REPR(i, s, n) for (lli i = n - 1; i >= s; i--)
#define maxN
#define mod 1000000007
using namespace std;
// const lli INF = lli_MAX;
lli dirX[4] = {1, 0, 0, -1};
lli dirY[4] = {0, 1, -1, 0};
char move[4] = {'D', 'R', 'L', 'U'};
bool visited[100001];

bool comp(pair<lli, lli> &p1, pair<lli, lli> &p2)
{
    return (p1.second < p2.second);
}
lli solve()
{
    lli n, k;
    cin >> n >> k;
    if (n >= k)
        return k;

     if(n==1) return __builtin_popcount(k);
    lli ans = 0;

    while (n>1&&k>1)
    {
        lli check = 1, cnt, mx_sb = 0;
        lli div=0, sb=0, minus=0,minus_n=0;
        while ((check - 1) < k)
        {
            if ((check-1)!=0)
            {
                div = (k / (check - 1));
                sb = div * __builtin_popcount(check - 1);
                if (div <= n&&mx_sb<sb)
                {
                    mx_sb =sb;
                    minus = div * (check - 1);
                    minus_n=div;
                }
            }
            check = check << 1;
        }
        ans += mx_sb;
        n -= minus_n;
        // cout<<check<<" ";
        k -= minus;
        // cout<<k<<" ";
    }
    ans += __builtin_popcount(k);
    return ans;
}

lli binarySearch(lli arr[], lli l, lli r, lli x)
{
    if (r >= l)
    {
        lli mid = l + (r - l) / 2;

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
    lli t = 1;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}