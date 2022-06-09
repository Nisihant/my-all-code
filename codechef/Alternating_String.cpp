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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int zero=0,one=0;
    REP(i,0,n)
    {
        if(s[i]=='0')
        zero++;
        else
        one++;
    }
    if(zero==one)
    cout<<2*zero<<endl;
    else
    cout<<min(zero,one)*2+1<<endl;
}
    return 0;
}