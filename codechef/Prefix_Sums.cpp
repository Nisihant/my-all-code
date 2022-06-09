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
        if((n/2)%2)
        cout<<"NO"<<endl;
        else
        {
            vector<int>a,b;
                cout<<"YES"<<endl;
            for(int i=1;i<=n/2;i++)
            {
                if(i%2)
                {
                    a.pb(i);
                    a.pb(n-i+1);
                }
                else
                {
                    b.pb(i);
                    b.pb(n-i+1);
                }
            }
                sort(a.begin(),a.end());
                for(int i=0;i<n/2;i++)
                cout<<a[i]<<" ";
                cout<<endl;
                for(int i=0;i<n/2;i++)
                cout<<b[i]<<" ";
                cout<<endl;
        }
    }
    return 0;
}