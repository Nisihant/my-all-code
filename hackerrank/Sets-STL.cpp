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
    set<int> st;
    while(q--)
    {
        int a,x;
        cin>>a>>x;
        if(a==1)
        {
            st.insert(x);
        }
        else if(a==2)
        {
            st.erase(x);
        }
        else
        {
            if(st.find(x)!=st.end())
            cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}