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
        int n;
        set<string> st;
        cin>>n;
        REP(i,0,n)
        {
            string s;
            cin>>s;
            st.insert(s);
        }
        for(auto it=st.begin();it!=st.end();it++)
        {
            cout<<*it<<endl;
        }

    }
    return 0;
}