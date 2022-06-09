// https://www.codechef.com/START20B/problems/STBARR
#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define pii pair<int, int>
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define maxN
#define mod 1000000007
using namespace std;
void solve()
{
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int great = 0;
        cin >> n;
        int arr[n];
        REP(i, 0, n)
        {
            cin >> arr[i];
            if (arr[i] > great)
                great = arr[i];
        }
        bool check = true;

        REP(i, 1, n)
        if (arr[i] != arr[i - 1])
        {
            check = false;
            break;
        }

        if (check)
            cout << 0 << endl;

        else
        {
            if (arr[n-1]==great)
            cout<<1<<endl;
            else
            cout<<2<<endl;
        }
    }
    return 0;
}