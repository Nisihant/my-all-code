// https://www.codechef.com/LTIME101B/problems/N1VALUES
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
    int t,n;
    cin>>t;
    lli arr[61];
    arr[0]=1;
    REP(i,1,61)
    {
        arr[i]=2*arr[i-1];
    }
    while(t--)
    {
        cin>>n;
        lli sum=arr[n];
        if(n==1)
        cout<<1<<" "<<1<<endl;
        else
        {
            for(int i=1;i<=n-1;i++)
        {
            sum-=i;
            cout<<i<<" ";
        }
        cout<<(n-1)<<" "<<sum-(n-1)<<endl;
        }
    }
    return 0;
}