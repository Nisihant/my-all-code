#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define REPR(i, s, n) for (lli i = n-1; i>=s; i--)
#define maxN
#define mod 1000000007
using namespace std;
int dirX[4]={1,0,0,-1};
int dirY[4]={0,1,-1,0};
char move[4]={'D','R','L','U'};
void solve()
{
 
}
int main()
{
int t=1;
 cin>>t;	
 while(t--)
{
    int n;
    cin>>n;
    lli ans=0;
    int arr[n];
    REP(i,0,n)
    cin>>arr[i];
    unordered_map<int,int>mp;
    // sort(arr,arr+n);
    int cnt=1;
    REP(i,0,n)
    {
        // int a=log(arr[i-1]);
        // int b=log(arr[i]);
        // if(a==b)
        // cnt++;
        // else
        // {
        //     // cout<<cnt<<" "<<i<<" ";
        //     ans+=(cnt*(cnt-1))/2;
        //     cnt=1;
        //     // cout<<ans<<" ";
        // }
        mp[log2(arr[i])]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        int a=it->second;
        ans+=(a*(a-1))/2;
    }
    cout<<ans<<endl;
}
    return 0;
}