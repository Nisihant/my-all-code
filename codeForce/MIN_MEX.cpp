#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
using namespace std;
void solve()
{
 
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count=0;
       for(int i=0;i<s.size();)
        {
            if(s[i]=='0')
            {
                count++;
            while(s[i]=='0')
            {
                i++;
            }
            }
            else
            i++;
        }
        cout<<min(count,2)<<endl;
    }
    return 0;
}