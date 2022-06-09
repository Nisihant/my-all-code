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

int main()
{
    int t = 1;
    // cin>>t;
    while (t--)
    {
        stack<int> st;
        string s;
        cin >> s;
        int n = s.size();
        int arr[n +1];
        int f[n +1];
        REP(i, 0, n+1)
        {
            arr[i] = -1;
            f[i] = 0;
        }
        f[0] = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                st.push(i);
            else if (!st.empty() && s[i] == ')')
            {
                arr[i] = st.top();
                f[1 + i - arr[i]]++;
                if (st.top()!=0&&arr[st.top() - 1] != -1 && s[st.top()-1]==')')
                {
                    arr[i] = arr[st.top() - 1];
                    f[1 + i - arr[i]]++;
                }
                st.pop();
            }
        }

        int mx;
        // for(int i=0;i<10;i++)
        // cout<<f[i]<< " ";
        for (int i = n ; i >= 0; i--)
        {
            if (f[i] != 0)
            {
                mx = i;
                break;
            }
        }

        cout << mx << " " << f[mx] << endl;
    }
    return 0;
}