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
	int n,x;
    cin>>n>>x;

    vector<pair<int,int>> vec;
    REP(i,1,n+1) 
    {
        int a;
        cin>>a;
        vec.push_back({a,i});
    }
    sort(vec.begin(),vec.end());

    int left=0, right=vec.size()-1;

    bool flag=true;
    while(left<right)
    {
        if(vec[left].first+vec[right].first>x)
        {
            right--;
        }
        else
        if(vec[left].first+vec[right].first<x)
        left++;
        else
        {
            int a=vec[left].second;
            int b=vec[right].second;
            cout<<min(a,b)<<" "<<max(a,b)<<endl;
            flag=false;
            break;
        }
    }
    if(flag)
    cout<<"IMPOSSIBLE"<<endl;
}
    return 0;
}