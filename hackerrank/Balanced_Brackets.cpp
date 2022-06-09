#include<bits/stdc++.h>
#define lli long long int
#define make_pair mp
#define push_back pb
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
using namespace std;
map<char,int>vm={{'[',-1},{']',1},{'{',-2},{'}',2},{'(',-3},{')',3}};
bool solve()
{
    string s;
    cin>>s;
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        if(vm[s[i]]<0)
        st.push(s[i]);
        else 
        if(st.empty())
            return false;
        else
        {
            if(vm[s[i]]+vm[st.top()]==0&&!st.empty())
            {
                st.pop();
            }
            else
            return false;
        }
    }
    if(st.empty())
    return true;
    else
    return false;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        bool res=solve();
        if(res)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}