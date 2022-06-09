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
int n=1,q;
 cin>>n;
 string s; 
 cin>>s;
 int a[26];
 for(int i=0;i<26;i++)
    a[i]= -1;
    for(int i=0;i<n;i++){
        char c=s[i];
        if(a[c-'a']==-1)
            a[c-'a']=i+1;
    }

    lli pre[n+1];
    pre[0]=0;
    for(int i=0;i<=n;i++)
    {
        pre[i+1]=pre[i]+a[s[i]-'a'];
    }
    // for(int c:pre)
    // cout<<c<<" ";
cin>>q;
 while(q--)
{
	int l,r;
    cin>>l>>r;
    cout<<pre[r]-pre[l-1]<<endl;
}
    return 0;
}