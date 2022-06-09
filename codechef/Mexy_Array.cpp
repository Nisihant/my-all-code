#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define REPR(i, s, n) for (lli i = n - 1; i >= s; i--)
#define maxN 1000000000
#define mod 1000000007
using namespace std;
int dirX[4] = {1, 0, 0, -1};
int dirY[4] = {0, 1, -1, 0};
char move[4] = {'D', 'R', 'L', 'U'};
vector<int> vec;
set<int> st;
 int n;
int solve()
{
   
    cin >> n;
    int a[n];
    for (int i = 0; i <= 100000; i++)
    {
        st.insert(i);
    }

    REP(i, 0, n)
    {
        cin >> a[i];
        st.erase(a[i]);
    }
    int pre = 0;
    if(a[0]!=0&&a[1]!=1)
    return -1;
    for (int i = 0; i < n; i++)
    {
        if(a[pre]>a[i]&&a[i]>-1)
            return -1;

        if (a[i] < 0)
        {
            int temp = *st.begin();
            vec.push_back(temp);
            st.erase(temp);
        }
        else
        {
            if (a[pre] == a[i])
            {
                int temp = *st.begin();
                vec.push_back(temp);
                st.erase(temp);
            }
            else
            {
                vec.push_back(a[pre]);
            }
            pre=i;
        }
    }
    return 0;
    
}
void mex(int arr[], int n)
{
    vector<int> vec;
    int val = 0;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
        if (*st.begin() == val)
        {
            st.erase(st.begin());
            val = *st.begin();
            vec.push_back(val);
        }
        else
            vec.push_back(val);
    }
    for (int i = 0; i < n; i++)
        cout << vec[i] << " ";
}
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        if(solve()==-1)
        cout<<-1<<endl;
        else
        for(int i=0;i<n;i++)
        cout<<vec[i]<<" ";
        cout<<endl;
    }
    return 0;
}