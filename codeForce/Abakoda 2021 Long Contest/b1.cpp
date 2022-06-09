#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
#define mod 1000000007
using namespace std;
string solve()
{
    int n;
    cin>>n;
    int p[n],c[n];
    REP(i,0,n) cin>>p[i];

    REP(i,0,n) cin>>c[i];
    sort(p,p+n);
    sort(c,c+n);

    REP(i,0,n)
    {
        if(p[i]>c[i])
        return "NO";
    }
 return "YES";
}
int main()
{
    cout<<solve()<<endl;
    return 0;
}