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
 //cin>>t;	
 while(t--)
{
	int n,k;
    cin>>n>>k;
    int arr[n];
    REP(i,0,n) cin>> arr[i];

    sort(arr,arr+n);

    int l=0,r=n-1;
    int ans=0;
    while(l<r)
    {
        if(arr[l]+arr[r]>k)
        {
            ans++;
            r--;
        }
        else
        {
            ans++;
            l++;
            r--;
        }
    }
    if(l==r)
    ans++;
    cout<<ans<<endl;
}
    return 0;
}