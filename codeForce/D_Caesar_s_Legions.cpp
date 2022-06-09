#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define REPR(i, s, n) for (lli i = n-1; i>=s; i--)
#define maxN
#define mod 100000000
using namespace std;
const int INF=INT_MAX;
int dirX[4]={1,0,0,-1};
int dirY[4]={0,1,-1,0};
char move[4]={'D','R','L','U'};
bool visited[100001];

bool comp(pair<int,int> &p1,pair<int,int> &p2)
{
    return (p1.second<p2.second);
}
void solve()
{
 
}

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        if (arr[mid] == x)
            return mid;
 

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}
int n1,n2,k1,k2;
lli dp[101][101][11][11];
void init()
{
    for(int i=0;i<101;i++)
    {
        for(int j=0;j<101;j++)
        {
            for(int k=0;k<11;k++)
            {
                for(int l=0;l<11;l++)
                dp[i][j][k][l]=-1;
            }
        }
    }
}
int getAns(int f,int h,int limit_f,int limit_h)
{
    if((f+h)==0) return 1;
    int ans=0;
    //footmen
    if(dp[f][h][limit_f][limit_h]!=-1)
    return  dp[f][h][limit_f][limit_h];


    if(f>0&&limit_f>0)
    ans+=getAns(f-1,h,limit_f-1,k2),ans=ans%mod;

    //horsemen
    if(h>0&&limit_h>0)
    ans+=getAns(f,h-1,k1,limit_h-1),ans=ans%mod;

    return dp[f][h][limit_f][limit_h]=ans%mod;
    
}
int main()
{
int t=1;
 //cin>>t;	
 while(t--)
{
	
    cin>>n1>>n2>>k1>>k2;
    init();
    cout<<getAns(n1,n2,k1,k2)<<endl;
}
    return 0;
}