#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define REPR(i, s, n) for (lli i = n-1; i>=s; i--)
#define maxN
#define mod 1000000007
using namespace std;

lli arr[20];
void solve()
{
 
}
lli setbit(lli value,lli n)
{
    lli sum=0;
   int i=0;
   while(value)
   {
       if(value&1)
        sum+=arr[i];

      i++;
      value=value>>1;
   }
   return sum;
}
int main()
{
int t=1;
 //cin>>t;	
 while(t--)
{
	lli n,sum=0;
    cin>>n;
    
    REP(i,0,n)
    {
         cin>>arr[i];
         sum+=arr[i];

    }
    lli mn=LLONG_MAX;
    for(int i=0;i<(1<<n);i++)
    {
        mn=min(abs(sum-2LL*setbit(i,n)),mn);
    }
    cout<<mn<<endl;
}
    return 0;
}