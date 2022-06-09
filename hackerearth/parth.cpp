
#include<bits/stdc++.h>
#define lli long long int
#define mp(x) make_pair(x)
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
        lli n,k;
        cin>>n>>k;
        lli arr[n];
        map<lli,lli>a,b;
        REP(i,0,n)
        {
            cin>>arr[i];
            a[arr[i]]++;
        }
        REP(i,0,n)
        {
            b[arr[i]^k]++;
        }
        set<lli>vec;

        for(auto it=a.begin();it!=a.end();it++)
        {
            vec.insert(it->first);
        }
        for(auto it=b.begin();it!=b.end();it++)
        {
            vec.insert(it->first);
        }
        lli maxrep=0,minstep=LLONG_MAX;
        for(auto it=vec.begin();it!=vec.end();it++)
        {
            if(maxrep<=a[*it]+b[*it])
            {
                maxrep=a[*it]+b[*it];
                minstep=min(minstep,b[*it]);
            }
        }
        cout<<maxrep<<" "<<minstep<<endl;
    }
    return 0;
}