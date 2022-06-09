// https://codeforces.com/contest/1622/problem/C
#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define pii pair<int, int>
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define maxN
#define mod 1000000007
using namespace std;
lli solve()
{
    lli n, k;
    cin >> n >> k;
    int arr[n];
    lli sum = 0,absum;
    REP(i, 0, n)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    absum=sum;


    if (sum <= k)
        return 0;

    sort(arr, arr + n);
    
    lli step=0,minstep;
    lli i=n-1;
    while(arr[i]!=arr[0])
    {
        sum-=(arr[i]-arr[0]);
        step++;
        if(sum<=k)
        break;

        i--;
    }
    if(sum<=k)
    minstep=sum;
    else
    minstep=(step+(sum-k));
    lli temp=absum-k;
    int l=arr[0];
    while(temp--)
    {
        sum=absum;
        --arr[0];
        step=(l-arr[0]);
        sum-=step;

    lli i=n-1;
    while(i>0)
    {
        sum-=(arr[i]-arr[0]);
        step++;
        --i;

        if(sum<=k)
        break;
    }
    if(sum<=k)
    minstep=min(minstep,step);
    else
    minstep=min(minstep,step+(sum-k));
    }
    return minstep;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}