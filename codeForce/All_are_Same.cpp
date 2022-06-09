// https://codeforces.com/contest/1593/problem/D1
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
    int n;
    cin >> n;
    int arr[n];
    
    REP(i,0,n) cin>>arr[i];
    sort(arr,arr+n);
    
    int a=arr[0];
    REP(i,0,n) arr[i]-=a;

    int ans=0;
    
    REP(i,0,n)
    {
        ans=__gcd(ans,arr[i]);
    }
    if(ans==0)
    cout<<-1<<endl;
    else
    cout<<ans<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}