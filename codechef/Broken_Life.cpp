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
bool check = false;
unordered_map<char, vector<int>> vec;

bool comp(pair<int, int> &p1, pair<int, int> &p2)
{
    return (p1.second < p2.second);
}
void solve()
{
    int m, n;
    cin >> m >> n;
    string s, t;
    cin >> s >> t;
   int fst=0,scnd=0;
    while(fst<s.size()&&scnd<t.size())
    {
        if(s[fst]==t[scnd])
        {
            fst++;
            scnd++;
        }
        else
        {
            fst++;
        }
    }
    if(scnd==t.size())
    {
        cout<<-1<<endl;
        return;
    }
    int left = 0, right = 0;

    while (left < m)
    {
        if (s[left] != '?')
        {
            if (t[right] == s[left])
                right++;
            left++;
            continue;
        }

        for (char c : {'a', 'b', 'c', 'd', 'e'})
        {
            if (c != t[right])
            {
                s[left] = c;
                left++;
                break;
            }
        }
    }
    cout << s << endl;
}

int binarySearch(char c, int ind)
{
    int l = 0, r = vec[c].size();
    vector<int> arr = vec[c];
    if (ind >= arr[r - 1])
    {
        check = true;
        return -1;
    }
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] <= ind)
            l = mid;
        else
            r = mid;
    }
    if (arr[l] > ind)
        return arr[l];
    else
        return arr[r];
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {

        solve();
        // vec.clear();
        // REP(i,0,m)
        // {
        //     vec[s[i]].push_back(i);
        // }
        // for(auto it=vec.begin();it!=vec.end();it++)
        // {
        //     vector<int> arr=it->second;
        //     cout<<it->first<<" ";
        //     for(int i=0;i<arr.size();i++)
        //     cout<<arr[i]<<" ";
        //     cout<<endl;
        // }
        // int lastind=-1;
        // for(int i=0;i<n;i++)
        // {
        //     lastind=binarySearch(k[i],lastind);
        //     if(check==false)
        //     {
        //         cout<<-1<<endl;
        //         break;
        //     }
        //     // cout<<lastind<<" ";
        // }

        // if(check==true)
        // {

        // }
    }
    return 0;
}