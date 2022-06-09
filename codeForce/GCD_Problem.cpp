// https://codeforces.com/contest/1617/problem/B
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
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c=1;
        cin>>n;

        for(int i=2;i<=(n-1)/2;i++)
        {
            a=i;
            b=n-1-a;
            if(__gcd(a,b)==1)
            break;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}