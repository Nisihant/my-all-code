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
    int n;
    cin>>n;
    int arr[n+1];
    REP(i,1,n+1) cin>>arr[i];

    lli pre[n];
    pre[1]=arr[1];
    for(int i=2;i<n;i++)
    pre[i]=pre[i-1]+arr[i];

    bool check=false;
    vector<pair<int,int>>vec;
    int right,left=1;
    for(int i=0;i<60;i++)
    {
        vec.clear();
        left=1;
        for(int right=1;right<n+1;right++)
        {
            
            if((pre[right]-pre[left])&(1<<i))
            {
                while(right<n+1&&(pre[right]-pre[left])&1<<i)
                {
                    right++;
                }
                vec.push_back({left,right-1});
                left=right;
            }
            
        }
        if((pre[right-1]-pre[left])&(1<<i)!=0)
        {
            // vec.push_back({left,right});
        if(vec.size()>1)
        {
            cout<<"YES"<<endl;
            for(auto it=vec.begin();it!=vec.end();it++)
            cout<<it->first<<" "<<it->second<<endl;
            check=true;
            break;
        }
        }
    }
    if(!check)
    cout<<"NO"<<endl;
}
    return 0;
}