#include<bits/stdc++.h>
#define lli long long int
#define mp(x) make_pair(x)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
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
        lli n,p,k;
        cin>>n>>p>>k;
        lli a=(n-1)%k;
        lli b=(n-1)/k;
        lli c=p%k;
        lli mn=min(c-1,a);
        lli days=(1+mn)*(b+1)+(c-1-mn)*b+(p/k+1);
        cout<<days<<endl;
    }
    return 0;
}