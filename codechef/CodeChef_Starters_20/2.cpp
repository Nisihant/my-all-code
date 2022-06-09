// https://www.codechef.com/START20B/problems/BRTXORS.
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
        int n;
        cin>>n;
        int a=1;
        while(n>a)
        a=a<<1;
        if(n==1)
        cout<<1<<endl;
        else
        if(n==2)
        cout<<2<<endl;
        else
        if(n==a)
        {
            a=a<<1;
            cout<<(a-1)%mod<<endl;
        }
        else
        cout<<a%mod<<endl;

    }
    return 0;
}   