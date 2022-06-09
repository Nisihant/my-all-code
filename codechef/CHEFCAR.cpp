// https://www.codechef.com/LTIME101B/problems/CHEFCAR
#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
#define mod 1000000007
using namespace std;
void solve()
{
 
}
int main()
{
    int t,n,v;
    cin>>t;
    while(t--)
    {
        cin>>n>>v;
        lli mx=0,mn=0;
        mx=1LL*(n-1)*n/2;
        if(v==1)
        mn=mx;
        else
        if(v>=n-1)
        mn=n-1;
        else
        {
            mn=v+((n-v)*(n-v+1)/2)-1;
        }
        cout<<mx<<" "<<mn<<endl;
    }
    return 0;
}