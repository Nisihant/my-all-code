#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define REPR(i, s, n) for (lli i = n-1; i>=s; i--)
#define maxN 1000000
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
string s;
vector<int> cnt[26];
lli dp[maxN];

int binarySearch(char c,int ind)
{
    int left=0,right=cnt[c].size()-1;
    while (right >= left) {
        int mid = (right+left) / 2;
 
        if (cnt[c][mid]>ind&&(mid==0||cnt[c][mid-1]<=ind))
            return cnt[c][mid];
        else
        if (cnt[c][mid]>ind)
            right=mid-1;
        else
        left=mid+1;
    }
    return -1;
}



int func(int index )
{
    if (index == s.size())
        return 0;
    else if (dp[index] != -1)
        return dp[index];
    else
    {
        int ans = 1 + func(index + 1);
        int nindex = binarySearch(s[index] - 'a', index);

        if (nindex != -1)
        {
            ans = min(ans, nindex - index - 1 + func(nindex + 1));
        }

        return dp[index] = ans;
    }
}

void solve()
{
    cin >> s;

    REP(i, 0, 26)
    cnt[i].clear();

    REP(i, 0, s.size())
    cnt[s[i] - 'a'].push_back(i), dp[i] = -1;

    cout << func(0) << endl;
}

int main()
{
int t=1;
 cin>>t;	
 while(t--)
{
	solve();
}
    return 0;
}