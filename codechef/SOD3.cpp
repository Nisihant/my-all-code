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
    int t;
    cin>>t;
    while(t--)
    {
        lli a,b,l,r,count=0;
        cin>>a>>b;
        // if(a%3==0)
        // {
        //     count++;
        // }
        
        //  if(b%3==0)
        // {
        //     count++;
        // }
        // if(count)
        // count=1;
        // lli d=3;
        // lli ans=((b-a)/3+count);
        // if(ans==0)
        // {
        //     for(lli i=a;i<=b;i++)
        //     if(i%3==0)
        //     ans++;
        // }
        l=(a-1)/3;
        r=b/3;
        cout<<r-l<<endl;
        // cout<<(b-a)/3<<endl;

    }
    return 0;
}