// https://codeforces.com/contest/1593/problem/A
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
        int arr[3];
        int mx=0;
        map<int,int>m;
        REP(i,0,3)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        mx=max(arr[0],arr[1]);
        mx=max(mx,arr[2]);
        if(m[mx]==3)
        cout<<1<<" "<<1<<" "<<1<<endl;
        else
        if(m[mx]==2)
        {
            if(arr[0]==mx)
            cout<<1<<" ";
            else
            cout<<(mx+1-arr[0])<<" ";


            if(arr[1]==mx)
            cout<<1<<" ";
            else
            cout<<(mx+1-arr[1])<<" ";

            if(arr[2]==mx)
            cout<<1<<" "<<endl;
            else
            cout<<(mx+1-arr[2])<<endl;
        }
        else
        {
             if(arr[0]==mx)
            cout<<0<<" ";
            else
            cout<<(mx+1-arr[0])<<" ";


            if(arr[1]==mx)
            cout<<0<<" ";
            else
            cout<<(mx+1-arr[1])<<" ";

            if(arr[2]==mx)
            cout<<0<<" "<<endl;
            else
            cout<<(mx+1-arr[2])<<endl;
        }
    }
    return 0;
}