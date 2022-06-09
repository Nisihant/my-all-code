#include <bits/stdc++.h>
#define lli long long int
using namespace std;
const int m = 1e9 + 7;
int fact[1000006];
lli power(int a, int b)
{
    lli res = 1;
    while (b)
    {
        if (b & 1)
        {
            res = (res * (a % m)) % m;
            b--;
        }
        else
        {
            a = ((a % m) * (a % m)) % m;
            b /= 2;
        }
    }
    return res;
}
lli combi(int a, int i)
{
    lli res = 1;
    res = fact[a] % m;
    res = (res * (power(fact[i], m - 2)) % m) % m;
    res = (res * (power(fact[a - i], m - 2)) % m) % m;
    return res;
}
int main()
{
    fact[0] = 1;
    fact[1] = 1;
    int j;
    for (j = 2; j < 1000001; j++)
        fact[j] = (j * fact[j - 1]) % m;
    int t, n;
    cin >> t >> n;
    while (t--)
    {
        cin >> n;
        lli res = 1;
        lli ans = 0;
        for (int i = 1; i < n; i++)
        {
            res = (res * (combi(n, i)) % m) % m;
            res = (res * (power(2, n - i) - 1) % m) % m;
            res = (res * (power(2, i) - 1) % m) % m;
            ans = (ans + res) % m;
        }
        cout << ans << endl;
    }
    return 0;
}