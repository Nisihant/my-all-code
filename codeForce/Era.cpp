// https://codeforces.com/contest/1604/problem/A#
#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
#define mod 1000000007
using namespace std;
void solve()
{
 
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n+1];
        REP(i,1,n+1)cin>>arr[i];

        int ans=0;
        REP(i,1,n+1)
        {
            if(arr[i]>i+ans)
            {
                ans+=arr[i]-(i+ans);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}