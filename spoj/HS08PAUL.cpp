#include<bits/stdc++.h>
#define lli long long int
#define mp(x) make_pair(x)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN 10000000
using namespace std;
vector<char>mark(maxN+1,false);
vector<lli> x2,x4;
void seive()
{
    mark[0]=true,mark[1]=true;
    for(lli i=2;i*i<=maxN;i++)
    {
        if(mark[i]==false)
        {
            for(lli j=i*i;j<=maxN;j+=i)
            {
                mark[j]=true;
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    seive();
     for(lli i=1;i*i<=maxN;i++)
        x2.pb(i*i);
        for(lli i=1;i*i*i*i<=maxN;i++)
        x4.pb(i*i*i*i);
    while(t--)
    {
        lli n;
        lli count=0;;
        cin>>n;
        for(auto it=x4.begin();*it<=n;it++)
        {
                   for(auto k=x2.begin();*k<=(n-*it);k++)
                  {
                    if(mark[*it+*k]==false&&(*it+*k)<=n)
                    count++;
                  }
        }
        cout<<count<<endl;

    }
    return 0;
}