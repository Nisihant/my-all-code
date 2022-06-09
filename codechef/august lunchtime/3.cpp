#include<bits/stdc++.h>
#define lli long long int
#define mp(x) make_pair(x)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
using namespace std;
int solve(int arr[],int n)
{
    int step=0;
    int current=0;
    int mx=arr[0];
    int last=0;
    REP(i,1,n)
    {
        if(arr[i]>arr[i-1])
        {
            step++;
            mx=max(mx,arr[i]);
            last=i;
        }
    }
    if(mx==arr[0])
    return step+(n-last-1);
    else
    return -1;
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        REP(i,0,n) {cin>>arr[i];}
       cout<<solve(arr,n)<<endl;

    }
    return 0;
}