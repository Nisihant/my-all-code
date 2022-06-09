#include <bits/stdc++.h>
#define lli long long int
#define maxN 1000005
using namespace std;
lli a[maxN];
int main()
{
    lli i, j;
    a[0]=0;
    a[1]=0;
    for (i = 2; i < maxN; i++)
        a[i] = 1;
    for (i = 2; i * i < maxN; i++)
    {
        if (a[i] == 1)
        {
            a[i] = i;
            for (j = i * i; j < maxN; j += i)
            {
                a[j] = 0;
            }
        }
    }
    for (i = 1; i < maxN; i++)
    {
        a[i] += a[i - 1];
    }

    lli n, l, r;
    cin >> n;
    while (n--)
    {
        cin >> l >> r;
        cout << (a[r] - a[l - 1]) << endl;
    }
    return 0;
}