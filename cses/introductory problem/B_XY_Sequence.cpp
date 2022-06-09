#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define REPR(i, s, n) for (lli i = n-1; i>=s; i--)
#define maxN
#define mod 1000000007
using namespace std;
int dirX[4]={1,0,0,-1};
int dirY[4]={0,1,-1,0};
char move[4]={'D','R','L','U'};
void solve()
{
 
}
int main()
{
int t=1;
 cin>>t;	
 while(t--)
{
    int n,B,x,y;
    cin>>n>>B>>x>>y;
    lli sum=0,a=0;
    for(int i=1;i<=n;i++)
    {
        if(a+x<=B)
        {
            sum+=(a+x);
            a=a+x;

        }
        else
        {
            sum+=(a-y);
            a=a-y;
        }
    }
    cout<<sum<<endl;
}
    return 0;
}