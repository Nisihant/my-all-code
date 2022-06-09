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
    if(n==2)
    {
        cout<<"-1 -1"<<endl;
        cout<<"-1 -1"<<endl;
    }
    else
    {
        REP(i,1,n+1)
        {
            REP(j,1,n+1)
            {
                if(j==i)
                cout<<-1<<" ";
                else
                cout<<1<<" ";
            }
            cout<<endl;
        }
    }
    }
    return 0;
}