#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define REPR(i, s, n) for (lli i = n-1; i>=s; i--)
#define maxN
#define mod 1000000007
using namespace std;
set<string>st;
void solve()
{
 
}
void permutation(string s,int ind)
{
    for(int i=ind;i<s.size();i++)
    {
        swap(s[i],s[ind]);
        permutation(s,ind+1);
        swap(s[i],s[ind]);
    }
    st.insert(s);
}
int main()
{
int t=1;
 //cin>>t;	
 while(t--)
{
	string s;
    cin>>s;
    permutation(s,0);
    cout<<st.size()<<endl;
    for(string a:st)
    cout<<a<<endl;
}
return 0;
}