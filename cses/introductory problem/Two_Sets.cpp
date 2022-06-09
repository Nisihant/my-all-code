// https://cses.fi/problemset/task/1092
#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define pii pair<int, int>
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define REPR(i, s, n) for (lli i = n - 1; i >= s; i--)
#define maxN 1000001
#define mod 1000000007
using namespace std;
int use[maxN];
void solve()
{
}
int main()
{
    lli n;
    cin >> n;
    set<int> set1, set2;
    set1.clear();
    set2.clear();
    if (n % 4 && (n + 1) % 4)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        lli sum = n * (n + 1);
        sum /= 4;
        lli k = sqrt(sum);
        if ((sum - k * k) % 2 == 0)
        {
            for (int i = 1; i <= k; i++)
                set1.insert(2 * i - 1), use[2 * i - 1] = 1;

            if (sum - k * k != 0)
                set1.insert(sum - k * k), use[sum - k * k] = 1;
        }
        else
        {
            for (int i = 1; i <= k - 1; i++)
                set1.insert(2 * i + 1), use[2 * i + 1] = 1;
            set1.insert(sum + 1 - k * k), use[sum + 1 - k * k] = 1;
        }
        for (int i = 1; i <= n; i++)
            if (use[i] == 0)
                set2.insert(i);

        cout << set1.size() << endl;
        for (auto it : set1)
            cout << it << " ";
        cout << endl;
        cout << set2.size() << endl;
        for (auto it : set2)
            cout << it << " ";
    }

    return 0;
}
