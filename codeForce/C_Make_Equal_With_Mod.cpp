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
void solve()
{
    int n;
    cin >> n;
    lli arr[n];
    REP(i, 0, n)
        cin >> arr[i];

    sort(arr, arr + n);
    int onepos=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            onepos=i;
            break;
        }
    }
    
    if(onepos==-1)
    {
        cout<<"YES"<<endl;
        return;
    }
    else
    if(arr[0]==0)
    {
        cout<<"NO"<<endl;
        return;
    }
    else
    {
        for(int i=1;i<n;i++)
        {
            if((arr[i]-arr[i-1]==0))continue;
            if((arr[i]-arr[i-1])==1)
            {
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
        return;
    }


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