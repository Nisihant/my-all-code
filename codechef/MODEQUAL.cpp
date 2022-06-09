#include<bits/stdc++.h>
#define lli long long int
#define make_pair mp
#define push_back pb
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
        int n,count=0;
        cin>>n;
        map<lli ,int>m;
        REP(i,0,n)
        {
            lli a;
            cin>>a;
            m[a]++;
        }
        auto f=m.begin();
        auto s=f++;
        bool check;
        if(2*(f->first)<(s->first)||(f->first==1))
        check=true;
        else
        check=false;
        for(auto it=m.begin();it!=m.end();it++)
        {
            count++;
        }
        if(check)
        cout<<count-1<<endl;
        else
        cout<<count<<endl;
    }
    return 0;
}