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
{
	int n;
    cin>>n;
    int left=1,right=1;
    vector<pair<int,int>>pr;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        pr.push_back({a,i});
    }
    sort(pr.begin(),pr.end());
    cout<<pr[0].second<<" "<<pr[n-1].second<<endl;
}
    return 0;
}