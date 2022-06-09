#include<bits/stdc++.h>
#define lli long long int
// #define int long long int
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
int visited[200001];

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
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    map<int,int>mp;
    mp[arr[0]]=0;
    int start=0;
    vector<pair<int,int>>vec;
    
    for(int i=1;i<n;i++)
    {
        if(start==0)
        {
            if(mp[arr[i]]==0&&arr[i]!=arr[0]) mp[arr[i]]=1;
            else
            {
                vec.push_back({start,i-1});
            mp.clear();
            mp[arr[i]]=i;
            start=i;
            }
        }
        else
        if(mp[arr[i]]<=start ) mp[arr[i]]=i;
        else
        {
            vec.push_back({start,i-1});
            mp.clear();
            mp[arr[i]]=i;
            start=i;
        }
    }
    vec.push_back({start,n-1});

    int ans=INT_MAX;
    for(int i=0;i<vec.size();i++)
    {
        int mn=min(vec[i].first,n-1-vec[i].second);
        int mx=max(vec[i].first,n-1-vec[i].second);
        ans=min(ans,mn*2+mx);
    }
    if(arr[0]==arr[n-1])
    ans=max(ans,1);

    sort(arr,arr+n);
    if(arr[0]==arr[n-1])
    ans=n-1;
    
    cout<<ans<<endl;
// cout<<endl;
}
    return 0;
}