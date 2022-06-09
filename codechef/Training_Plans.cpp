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
long double solve()
{
    int n;
    cin>>n;
    long double arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<pair<int,int>>vec;
    REP(i,0,n)
    {
        long double a;
        cin>>a;
        vec.push_back({a,arr[i]});
    }
    sort(vec.begin(),vec.end());
    // for(int i=0;i<n;i++)
    // cout<<vec[i].first<<" "<<vec[i].second<<endl;

    long double ans=0.000000;
    if(vec[0].first>0)
    return ans;
    int count=0;
    vector<pair<long double,long double>>temp;
    long double sum=0;
    for(int i=0;i<n;i++)
    {
        if(vec[i].first<=count)
        {
            sum+=vec[i].second;
            count++;
            temp.push_back({count,sum});
        }
        // else
        // if(vec[i].first<=count&&vec[i].second<0)
        // {
        //     temp.push_back({count,sum});
        //     sum+=vec[i].second;
        //     count++;
        //     // ans=max(ans,sum/count);
        // }
        else
        if(vec[i].first>count)
        break;
    }
    temp.push_back({count,sum});
    for(int i=0;i<temp.size();i++)
    {
        
        ans=max(ans,temp[i].second/temp[i].first);
    }
   return ans;
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
	cout<<solve()<<endl;

}
    return 0;
}