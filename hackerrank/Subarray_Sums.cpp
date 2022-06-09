#include<bits/stdc++.h>
#define lli long long int
#define make_pair mp
// #define push_back pb
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
using namespace std;
void solve()
{
 
}
int main()
{
    vector<pair<lli,int>>vec;
    vec.push_back({0,0});
    int n;
    cin>>n;
    lli arr[n+1];
    REP(i,1,n+1)
    {
        cin>>arr[i];
        vec.push_back({vec[i-1].first+arr[i],vec[i-1].second});
        if(arr[i]==0)
        vec[i].second++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        int l,r,x;
        cin>>n>>l>>r>>x;
        cout<<(vec[r].first-vec[l].first+(vec[r].second-vec[l].second)*x)<<endl;
    }
    return 0;
}