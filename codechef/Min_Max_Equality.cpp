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
    cin >> t;
    while (t--)
    {
        lli n, k;
        cin >> n >> k;
        lli arr[n + 1];
        REP(i, 0, n)
        cin >> arr[i];
        arr[n] = -1;
        // REP(i,0,n+1) cout<<arr[i]<<" ";
        priority_queue<lli> pq;
        lli dif_cnt = 0;
        lli i = 0;
        while (i < n)
        {
            if (arr[i] != arr[i + 1])
            {
                dif_cnt++;
                i++;
            }
            else
            {
                lli cnt = 1;
                while (i < n && arr[i] == arr[i + 1])
                {
                    cnt++;
                    i++;
                }
                i++;
                // cout<<cnt<<" ";
                pq.push(cnt);
            }
        }
        while (k-- && !pq.empty())
        {
            lli a = pq.top();
            pq.pop();
            if(a==2)
            dif_cnt+=2;
            else
            if(a==3)
            dif_cnt+=3;
            else
            if(a==4)
            {
                dif_cnt++;
                pq.push(2);
            }
            else
            if (a % 2)
            {
                pq.push(a / 2);
                pq.push(a / 2);
                dif_cnt++;
            }
            else
            {
                pq.push((a / 2 -1 ));
                pq.push(a / 2);
                dif_cnt++;
            }
        }
        lli ans = dif_cnt;

        while (!pq.empty())
        {
            lli a = pq.top();
            // cout<<a<<" ";
            ans += ((a * (a + 1LL))/2LL);
            pq.pop();
        }
        // cout<<endl;
        cout << ans << endl;
    }
    return 0;
}
