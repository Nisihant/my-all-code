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
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s;
        cin>>s;
        lli sum=0,count=0,i;
        for( i=0;i<s.size();i++)
        {
            if(s[i]!='0')
            {
                count++;
                sum+=(s[i]-48);
            }
        }
        sum+=count;
        if(s[i-1]!='0')
        cout<<sum-1<<endl;
        else
        cout<<sum<<endl;
    }
    return 0;
}