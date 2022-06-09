#include<bits/stdc++.h>
#define lli long long int
#define mp(x) make_pair(x)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define m 1000000007
using namespace std;
lli power(lli a,lli b)
{
    int res=1;
    while(b>0)
    {
    
    if(b%2==0)
    {
        a=((a%m)*(a%m))%m;
        b/=2;
    }
    else
    {
        res=(res*(a%m))%m;
        b--;
    }
}
    return res;
}
int main()
{
    lli a;
    string b;
    cin>>a>>b;
    lli pow=0;
    REP(i,0,b.length())
    {
        pow=(pow*10+b[i]-48)%(m-1);
    }
    cout<<power(a%m,pow%(m-1));
    return 0;
}