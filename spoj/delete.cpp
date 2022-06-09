#include<bits/stdc++.h>
#define lli long long int
#define mp(x) make_pair(x)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN 300001
using namespace std;
lli arr[maxN];
int main()
{
    REP(i,1,maxN)
    {
        arr[i]=i^arr[i-1];
    }
    lli t;
    cin>>t;
    while(t--)
    {
        lli a,b,res;
        cin>>a>>b;
      if(arr[a-1]==b)
      res=a;
      else
      if(arr[a]==b)
      res=a+2;
      else
      res=a+1;
        cout<<res<<endl;
    }
    // cout<<(2^arr[1]);
    return 0;
}