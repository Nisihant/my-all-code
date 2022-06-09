#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define REPR(i, s, n) for (lli i = n-1; i>=s; i--)
#define maxN
#define mod 1000000007
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

int main()
{
int t=1;
 cin>>t;	
 while(t--)
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    REP(i,0,n) cin>>arr[i];

    sort(arr,arr+n);

    int visited[n];
    REP(i,0,n) visited[i]=0;
    int rem=0,i=n-2,ans=0;
    while(i>=0)
    {
        ans+=(arr[i]+arr[i+1])/k;
        rem+=(arr[i]+arr[i+1])%k;
        i-=2;
    }
    cout<<ans+rem/k<<endl;
}
    return 0;
}