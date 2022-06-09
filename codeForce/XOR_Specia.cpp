// https://codeforces.com/contest/1604/problem/B
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
    while(t--)
    {
        cin>>n;
        int arr[n+1];
        bool check=false;
        arr[0]=0;
        REP(i,1,n+1)
        {
            cin>>arr[i];
            if(arr[i]<=arr[i-1])
            check=true;
        }
        if(n%2==0)
        cout<<"YES"<<endl;
        else
        {
            if(check)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
    return 0;
}