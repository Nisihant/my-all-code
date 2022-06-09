// https://codeforces.com/contest/1604/problem/D
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
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int ans=(x+y)/2;
        if(x>y)
        cout<<2*ans<<endl;
        else
        cout<<ans<<endl;
    }
    return 0;
}