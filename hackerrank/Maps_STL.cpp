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
    int q;
    cin>>q;
      unordered_map<string,lli> m;
    while(q--)
    {
        int a,c;
        string b;
        cin>>a;
        if(a==1)
        {
            cin>>b>>c;
            m[b]=m[b]+c;
        }
        else
        if(a==2)
        {
            cin>>b;
            m[b]=0;
        }
        else
        if(a==3)
        {
            cin>>b;
            cout<<m[b]<<endl;
        }
    }
    return 0;
}