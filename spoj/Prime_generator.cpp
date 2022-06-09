#include<bits/stdc++.h>
#define lli long long int
#define mx 100001
using namespace std;
lli prime[mx];
void seive()
{
    for(lli i=2;i*i<mx;i++)
    {
        if(prime[i]==0)
        {
            for(lli j=2*i;j<mx;j+=i)
            prime[j]=1;
        }
    }
}
void segmentedseive(lli l,lli r)
{
   
          if(l==1)
          l++;
          lli arr[r-l+1];
        for(lli p=2;p*p<=r;p++)
        {
            if(prime[p]==0)
            {
                lli i=(l/p)*p;
                if(i<l)
                i+=p;
                for(;i<=r;i+=p)
                {
                    if(i!=p)
                        arr[i-l]=1;
                }
            }
        }  
        for(lli i=0;i<r-l+1;i++)
        {
            if(arr[i]==0)
            cout<<i+l<<endl;
        }
}
int main()
{
  seive();
  lli t;
  cin>>t;
  while(t--)
  {
      lli l,r;
      cin>>l>>r;
      segmentedseive(l,r);
        cout<<endl;
  }
}