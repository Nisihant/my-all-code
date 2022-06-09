#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define REPR(i, s, n) for (lli i = n-1; i>=s; i--)
#define maxN
#define mod 1000000007
using namespace std;
string s,p;
bool solve(int l,int r)
{
    for(int i=l;i<=r;i++)
    {
        if(s[i]!=p[i-l]) return false;
    }
    return true;
}
int main()
{

cin>>s>>p;
int cnt=0;
int sl=s.size(),pl=p.size();
for(int l=0,r=pl-1;r<sl;l++,r++) 
{
    if(solve(l,r))
    cnt++;
}
return 0;
}