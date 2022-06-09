#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define REPR(i, s, n) for (lli i = n - 1; i >= s; i--)
#define maxN
#define mod 1000000007
using namespace std;
const int INF = INT_MAX;
int dirX[4] = {1, 0, 0, -1};
int dirY[4] = {0, 1, -1, 0};
char move[4] = {'D', 'R', 'L', 'U'};
bool visited[100001];

bool comp(pair<int, int> &p1, pair<int, int> &p2)
{
    return (p1.second < p2.second);
}
void solve()
{
}

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}
int pow(int a)
{
    int ans = 1;
    for (int i = 0; i < a; i++)
        ans *= 2;

    return ans;
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> st;
        REP(i, 0, n)
        {
            int x;
            cin >> x;
            st.insert(x);
        }
        unordered_map<int, int> mp;
        mp[0] = 1;
        int cnt = 0;
        for (auto it = st.begin(); it != st.end(); it++)
        {
            if (*it != 0)
            {
                int a=log2(*it);
                int res=pow(a);
                if(mp[res]!=1)
                {
                    cnt++;
                    mp[res]=1;
                }
                if (mp[*it - res] != 1)
                {
                    cnt++;
                    mp[*it - res] = 1;
                }
                
            }
        }
        cout << cnt << endl;
    }
    return 0;
}