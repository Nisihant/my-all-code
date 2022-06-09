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
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],b[n];
        REP(i,0,n)
        cin>>a[i];
        REP(i,0,n)
        cin>>b[i];
        int i;
        for( i=0;i<n;i++)
        {
            if(a[i]<b[0])
            break;
        }
        cout<<i<<endl;
    }
    return 0;
}