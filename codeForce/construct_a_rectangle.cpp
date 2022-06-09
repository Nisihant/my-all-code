// https://codeforces.com/contest/1622/problem/A
#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
#define mod 1000000007
using namespace std;
string solve()
{
    lli arr[3];
    REP(i,0,3) cin>>arr[i];
    sort(arr,arr+3);
    if((arr[0]==arr[1]&&arr[2]%2==0)||(arr[1]==arr[2]&&arr[0]%2==0))
    return "YES";
    if(arr[2]==arr[1]+arr[0])
    return "YES";

    return "NO";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}