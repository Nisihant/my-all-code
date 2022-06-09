// https://www.codechef.com/START20B/problems/WRDVLS
#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
#define mod 1000000007
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
        int n;
        cin>>n;
        vector<int >vec[n+1];
        REP(i,1,n+1) vec[i].push_back(0);

        REP(i,1,n+1) 
        {
            int a;
            cin>>a;
            if(n>=a)
            vec[a].push_back(i);
        }

        REP(i,1,n+1) vec[i].push_back(n+1);

        lli ans=0;
        REP(i,1,n+1)
        {
            if(vec[i].size()>=i+2)
            {
                vector<int> temp=vec[i];
                REP(j,1,temp.size()-i)
                {
                    ans+=i*(temp[j]-temp[j-1])*(temp[j+i]-temp[j+i-1]);
                }
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}