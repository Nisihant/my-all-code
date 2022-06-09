// https://www.codechef.com/START15B/problems/DIVEO
#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN 1000000001
#define mod 1000000007
using namespace std;
// vector<lli>vec(maxN,0);
       lli evencount=0,oddcount=0;
void solve(lli n)
{
  while(n%2==0)
  {
      evencount++;
      n/=2;
  }
  for(lli i=3;i*i<=n;i+=2)
  {
      while(n%i==0)
      {
          oddcount++;
          n/=i;
      }
  }
  if(n>2)
  oddcount++;
}
int main()
{
    // vec[1]=1;
    // for(int i=2;i<=maxN/2;i++)
    // {
    //     if(vec[i]==0)
    //     {   vec[i]=i;
    //         for(int j=i*i;j<maxN;j+=i)
    //         vec[j]=i;
    //     }
    // }
   lli t;
   cin>>t;
   while(t--)
   {
       evencount=0;
       oddcount=0;
       lli n,a,b;
       cin>>n>>a>>b;
       solve(n);
    //    while(vec[n]!=1)
    //    {
    //        if(vec[n]==2)
    //        evencount++;
    //        else
    //        oddcount++;
    //        n=n/vec[n];
    //    }
       lli ans=0;
       if(a>=0&&b>=0)
       ans=a*evencount+b*oddcount;
       else
       if(a>=0&&b<0)
       {
           if(evencount==0)
           ans=b;
           else
           ans=a*evencount;
       }
       else
       if(a<0&&b>=0)
       {
           if(evencount!=0)
           ans=a+b*oddcount;
           else
           ans=b*oddcount;
       }
       else
       if(a<0&&b<0)
       {
           if(evencount!=0)
           ans=a;
           else
           ans=b;
          
       }
       cout<<ans<<endl;
   }
}