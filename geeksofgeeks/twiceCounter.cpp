#include<bits/stdc++.h>
#define lli long long int
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
using namespace std;
void solve(map<string,int> &mp)
{
    int count=0;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        if(it->second==2)
        count++;
        // cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<count<<endl;
}
int main()
{
    int n;
    cin>>n;
    map<string,int> mp;
    REP(i,1,n+1)
    {
        string temp;
        cin>>temp;
        mp[temp]++;
    }
    solve(mp);
    return 0;
}