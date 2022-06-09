#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define REPR(i, s, n) for (lli i = n-1; i>=s; i--)
#define maxN
#define mod 1000000007
using namespace std;
void solve()
{
 
}
int main()
{
    string s;
    cin>>s;
    char begin=s[0];
    int mx=0;
    int cnt=0;
    REP(i,1,s.size())
    {
        if(s[i]==begin)
        cnt++;
        else
        {
            mx=max(mx,cnt);
            cnt=0;
            begin=s[i];
        }
    }
    mx=max(mx,cnt);
    cout<<mx+1<<endl;
    return 0;
}