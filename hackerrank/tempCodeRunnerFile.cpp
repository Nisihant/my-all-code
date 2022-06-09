#include<bits/stdc++.h>
#define lli long long int
#define make_pair mp
#define push_back pb
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
using namespace std;
void solve()
{
 
}
int main()
{
    lli n;
    cin>>n;
    map<string,int> m;
    REP(i,0,n)
    {
        string s;
        cin>>s;
        m[s]++;
    }
    for(auto it=m.begin();it!=m.end();it++)
    {
        if(it->second>(5*n)/100)
        cout<<it->first<<endl;
    }
    return 0;
}