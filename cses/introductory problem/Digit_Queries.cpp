#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define REPR(i, s, n) for (lli i = n - 1; i >= s; i--)
#define maxN
#define mod 1000000007
using namespace std;
lli arr[18];

lli power(lli a, lli b)
{
    lli ans = 1;
    while (b)
    {
        ans *= a;
        b--;
    }
    return ans;
}
void solve(lli k)
{
    if(k<=9)
    {
        cout<<k<<endl;
        return ;
    }
    int sz = 0;
    while (k > arr[sz])
    {
        sz++;
    }
    // cout<<sz<<" ";
    // return 0;
    k -= arr[sz - 1];
    // cout << k << " " << sz << " ";

    lli a=power(10,sz-1);
    a--;
    lli added;
    if(k%sz)
    added=k/sz+1;
    else
    {
        added=k/sz;
        a+=added;
        cout<<a%10<<endl;
        return;
    }

    a+=added;
    k-=(k/sz)*sz;
    int ans;
    for(int i=1;i<=(sz-k+1);i++)
    {
        ans=a%10;
        a/=10;
    } 
    cout<<ans<<endl;
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        int q;
        cin >> q;
        lli mul = 1;
        for (int i = 1; i < 18; i++)
        {
            arr[i] = (mul * 9 * i) + arr[i - 1];
            mul *= 10;
        }
        // for (int i = 0; i < 18; i++)
        //     cout << arr[i] << " ";

        while (q--)
        {
            lli k;
            cin >> k;
            solve(k);
        }
    }
    return 0;
}