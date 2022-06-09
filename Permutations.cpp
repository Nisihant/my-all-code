#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define REPR(i, s, n) for (lli i = n-1; i>=s; i--)
#define maxN
#define mod 1000000007
using namespace std;
void solve()
{
 
}
int main()
{
    int n;
    cin>>n;
    if(n<=3)
    cout<<"NO SOLUTION";
    else
    if(n==1)
    cout<<1<<" ";
    else
    {
        if(n%2)
        cout<<n<<" ";
        int half=n/2;
        for(int i=1;i<=half;i++)
        cout<<i<<" "<<i+half<<" ";
    }
    return 0;
}