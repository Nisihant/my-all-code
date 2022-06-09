#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define REPR(i, s, n) for (lli i = n-1; i>=s; i--)
#define maxN
#define mod 1000000007
using namespace std;
vector<int> vec;
int digcnt(int a)
{
    int ans=0;
    while(a)
    {
        if(a%2)
        ans++;
        a/=2;
    }
    return ans;
}

int main()
{
    int a=1000,i=2;
    int t;
    cin>>t;

    while(a)
  {
      if(digcnt(i)%2==0)
      {
          vec.pb(i);
          a--;
      }
      i++;
  }
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        cout<<vec[i]<<" ";
        cout<<endl;
    }
    return 0;
}