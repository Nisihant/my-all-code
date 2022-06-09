#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
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
    int t,x;
    string f[]={"North","East","South","West"};
    cin>>t;
    while(t--)
    {
        cin>>x;
        cout<<f[x%4]<<endl;
    }
    return 0;
}