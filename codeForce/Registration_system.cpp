#include<bits/stdc++.h>
#define lli long long int
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
using namespace std;
map<string,int> m;
void solve()
{
    string s;
    cin>>s;
    if(m[s]==0)
    {
        cout<<"OK"<<endl;
        m[s]++;
    }
    else
    {
        cout<<s<<m[s]<<endl;
        m[s]++;
    }

}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        solve();
    }
    return 0;
}