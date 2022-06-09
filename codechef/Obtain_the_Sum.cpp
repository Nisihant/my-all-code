#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN 1000000000
using namespace std;
void solve()
{
 
}
int main()
{
    lli t,n,s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        lli sum=(n*(n+long(1)))/long(2);
        if(sum-s>0&&(sum-s)<=n)
        cout<<sum-s<<endl;
        else
        cout<<-1<<endl;
    }
    return 0;
}