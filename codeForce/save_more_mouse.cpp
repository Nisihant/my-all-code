// https://codeforces.com/contest/1593/problem/C
#include <bits/stdc++.h>
#define lli long long int
#define mp(x) make_pair(x)
#define pb(x) push_back(x)
#define pii pair<int, int>
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define maxN
using namespace std;
int solve()
{
    int n, k;
    cin >> n >> k;
    int arr[k];
    REP(i, 0, k)
    {
        cin>>arr[i];
    }
    sort(arr,arr+k,greater<int>());
    int cat = 0,savemice = 0;
    for (int i=0;i<k;i++)
    {
        if(cat>=arr[i])
        break;

        cat+=n-arr[i];
        savemice++;
    }
    return savemice;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}