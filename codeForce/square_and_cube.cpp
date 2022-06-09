// https://codeforces.com/contest/1619/problem/B
#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
#define mod 1000000007
using namespace std;
set<lli> st;
vector<int>vec;
void square()
{
   for(lli i=1;i*i<=1000000001;i++)
   {
       st.insert(i*i);
   }
}

void cube()
{
    for(lli i=1;i*i*i<=1000000001;i++)
    {
        st.insert(i*i*i);
    }
}

void solve()
{
    lli n;
    cin>>n;
    int start=0,end=vec.size()-1;
    while(start<=end)
    {
        int mid=(start+end)/2;

        if(vec[mid]<=n && (mid==end||vec[mid+1]>n))
        {
            cout<<mid+1<<endl;
            return;
        }
        else if(vec[mid]<=n)
        start=mid+1;
        else
        end=mid-1;
    }
    cout<<0<<endl;
}
int main()
{
    square();
    cube();

    for(lli e: st) vec.push_back(e);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}