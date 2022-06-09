#include<bits/stdc++.h>
#define lli long long int
#define make_pair mp
#define push_back pb
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
using namespace std;
void solve(vector<int> &vec,int n)
{
    stack<int> st;
    vector<int> nge(n);
    REP(i,0,n)
    {
        while(!st.empty()&&vec[st.top()]<vec[i])
        {
            nge[st.top()]=vec[i];
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        nge[st.top()]=-1;
        st.pop();
    }
    
    REP(i,0,n)
    cout<<vec[i]<<" "<<nge[i]<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector<int>vec(n);
    REP(i,0,n)cin>>vec[i];
    solve(vec,n);
    return 0;
}