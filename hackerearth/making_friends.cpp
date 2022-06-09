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
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n%2==1)
        {
            if(m!=0)
             cout<<"No"<<endl;
             else
             cout<<"Yes"<<endl;
        }
        else
        {
            
        if(n/2>=m)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
        }
    }
    return 0;
}