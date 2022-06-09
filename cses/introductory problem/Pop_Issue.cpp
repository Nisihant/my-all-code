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
int arr[100001];
void solve()
{
 
}
int main()
{
int t=1;
 //cin>>t;
 while(t--)
{
	int q;
    cin>>q;
    while(q--)
    {
        int a;
        cin>>a;
        cout<<a+arr[a]<<endl;
        for(int i=a+1;i<10000;i++)
        {
            arr[i]-=1;
        }
    }
    
}
    return 0;
}