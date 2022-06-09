// https://codeforces.com/contest/1604/problem/C
#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
#define mod 1000000007
using namespace std;
lli arr[23];
void solve()
{
 
}
int main()
{
    arr[1]=1;
    for(lli i=2;i<=22;i++)
    {
        lli gcd=__gcd(arr[i-1],i);
        arr[i]=(arr[i-1]*i)/gcd;
        // cout<<arr[i]<<" ";
    }
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int val[n+1];
        REP(i,1,n+1)
        {
            cin>>val[i];
        }

        bool check=true;

        REP(i,1,min(22,n+1))
        {
            if(val[i]%arr[i+1]==0)
            check=false;
            break;
        }

        if(check)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
    return 0;
}