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
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int check=(n/2)+(n%2);
        if(k>check)
        cout<<-1<<endl;
        else
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    if(i%2==0)
                    cout<<'.';
                    else
                    {
                        if(i==j)
                        cout<<'R';
                        else
                        cout<<'.';
                    }
                }
                cout<<endl;
            }
        }
    }
    return 0;
}