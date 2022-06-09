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

bool binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return true;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return false;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    REP(i, 0, n)
        cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (binarySearch(arr, 0, n - 1, k + arr[i]))
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
    return;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}