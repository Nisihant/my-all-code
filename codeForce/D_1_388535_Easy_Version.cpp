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
    int l,r;
    cin>>l>>r;
    int temp[18],next[18];
    for(int i=0;i<=17;i++)
    {
        temp[i]=0;
        next[i]=0;
    }
    REP(i,0,r+1)
    {
        int check=0;
        while(i>=(1<<check))
        {
            if(i&1<<check)
            {
                temp[check]++;
            }
            check++;
        }
    }
    // for(int i=0;i<18;i++) cout<<temp[i]<<" ";
    // cout<<endl;
    REP(i,0,r+1)
    {
        int a;
        cin>>a;
        int check=0;
        while(a>=(1<<check))
        {
            if(a&1<<check)
            {
                next[check]++;
            }
            check++;
        }
    }
    // for(int i=0;i<18;i++) cout<<next[i]<<" ";
    // cout<<endl;
    int ans=0;
     for(int i=0;i<18;i++)
     {
         if(temp[i]!=next[i])
        ans+=1<<i;
     }
     cout<<ans<<endl;
}
    return 0;
}