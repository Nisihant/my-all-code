#include<bits/stdc++.h>
#define lli long long int
#define mp(x) make_pair(x)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN 100000000
using namespace std;
void solve()
{
    vector<lli>num;
    vector<bool>prime(maxN+1,false);
    for(lli i=2;i<maxN;i++)
    {
        if(prime[i]==false)
        {
            num.pb(i);
            for(lli j=i*i;j<maxN;j+=i)
            prime[j]=true;
        }
    }
    for(auto i=0;i<=num.size();i+=100)
    {
        cout<<num[i]<<endl;
    }
}
int main()
{
    solve();
    return 0;
}