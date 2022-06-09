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
bool visited[100001];
void solve()
{
 
}
bool comp(pair<int,int> &p1,pair<int,int> &p2)
{
    return (p1.second<p2.second);
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
	int n;
    cin>>n;
    vector<pair<int,int>>vec;
    REP(i,0,n)
    {
        int a,b;
        cin>>a>>b;
        vec.push_back({a,b});
    }
    int curEnd=-1,ans=0;
    sort(vec.begin(),vec.end(),comp);

    for(auto it=vec.begin();it!=vec.end();it++)
    {
        if(it->first>=curEnd)
        {
            ans++;
            curEnd=it->second;
        }
    }
    cout<<ans<<endl;
}
    return 0;
}