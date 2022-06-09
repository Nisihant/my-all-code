#include<bits/stdc++.h>
#define lli long long int
#define make_pair mp
// #define push_back(x) pb(x)
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
        int profit=0;
        int n;
        cin>>n;
        REP(i,0,n)
        {
            int a,b,c;
            cin>>a>>b>>c;
            profit=max(profit,(b/(a+1))*c);
        }
        cout<<profit<<endl;
    }
    return 0;
}