#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define REPR(i, s, n) for (lli i = n-1; i>=s; i--)
#define maxN 1000001
#define mod 1000000007
using namespace std;
lli dp[maxN];

int main()
{
    lli n;
    cin>>n;
    while(n!=1)
    {
        cout<<n<<" ";
        if(n%2)
        n=n*3+1;
        else
        n/=2;

    }
    cout<<n;
    return 0;
}