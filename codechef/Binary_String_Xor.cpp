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
    string s;
    cin>>s;
    int ones=0;
    int zeroes=0;
    int i=0;
    n=s.size();
    while(i<n)
    {
        if(s[i]=='1')
        break;
        else
        zeroes++;
        i++;
    }
    int lastone=-1;
    while(i<n)
    {
        if(s[i]=='1')
        {
            ones++;
            lastone=i;
        }
        i++;
    }
    zeroes+=(n-1-lastone);
    // cout<<lastone<<" "<<endl;
    int check=ones%k;

    if(ones==k)
    cout<<"YES"<<endl;
    else
    if(ones>k&&(ones/2+zeroes)>=k)
    cout<<"YES"<<endl;
    else
    if(ones<k &&(check%2==0)&&(ones/2+zeroes)>=k)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;


}
    return 0;
}