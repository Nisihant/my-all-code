#include<bits/stdc++.h>
#define lli long long int
#define make_pair mp
#define push_back pb
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN 1e9
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
        multiset<lli>st;
        int n;
        cin>>n;
        lli arr[n];
        REP(i,0,n)
        {
            cin>>arr[i];
            if(st.empty())
            {
                st.insert(arr[i]);
            }
            for(auto it=st.begin();it!=st.end();it++)
            {
                if(*it<arr[i])
                {
                    st.insert(arr[i]);
                }
            }
        }

    }
    return 0;
}