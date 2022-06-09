#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define pii pair<int, int>
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define maxN
#define mod 1000000007
using namespace std;
map<int,string>name;

void solve()
{
}
int main()
{
    name[0] = "Alice";
    name[1] = "Bob";
    name[2] = "Cindy";
    name[3] = "Dani";
    string s;
    int num=0;
    REP(i,0,3)
    {
        cin>>s;
        num+=(s[0]-'A');
    }
    cout<<name[6-num]<<endl;
    return 0;
}