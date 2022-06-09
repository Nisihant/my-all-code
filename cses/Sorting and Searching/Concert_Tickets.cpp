#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define REPR(i, s, n) for (lli i = n - 1; i >= s; i--)
#define maxN
#define mod 1000000007
using namespace std;
int dirX[4] = {1, 0, 0, -1};
int dirY[4] = {0, 1, -1, 0};
char move[4] = {'D', 'R', 'L', 'U'};
bool visited[100001];
map<int, int> mp;

void solve()
{
}

int binarySearch(int arr[], int l, int r, int x)
{
    while((r-l)>1)
    {
        int mid=(l+r)/2;
        if(arr[mid]<=x)
        {
            l=mid;
        }
        else
        if(arr[mid]>x)
        {
            r=mid-1;
        }
    }
    if(arr[l]<=x) return l;
    else
    if(arr[r]<=x) return r;
    else return -1;
    // for (int i = r; i >= l; i--)
    // {
    //     if (arr[i] <= x && mp[arr[i]] > 0)
    //         return i;
    // }

    // return -1;
}

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        int t, c;
        cin >> t >> c;
        multiset<int>mst;
        REP(i,0,t) 
        {
            int a;
            cin>>a;
            mst.insert(a);
        }   
        while(c--)
        {
            int p;
            cin>>p;

            auto it=mst.upper_bound(p);
            if(it==mst.begin())
            cout<<-1<<endl;
            else
            {
                it--;
                cout<<*it<<endl;
                mst.erase(it);
            }
        }
    }
    return 0;
}