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
{ int n,x;
cin>>n>>x;
int a[n+1];
map<int ,int> mp;
for(int i=0;i<n;i++){
    cin>>a[i];
    int c;
    c=a[i];
    mp[c]++;
    mp[c+x]++;
    if(c-x > 1)
        mp[c-x]++;
    
}
int ans=INT_MIN;
for(auto it=mp.begin();it!=mp.end();it++){
    ans=max(ans,(*it).second);
   cout<<(*it).first<<" "<<(*it).second<<endl;
}
cout<<ans<<endl;	
}
    return 0;
}