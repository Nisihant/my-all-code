#include<bits/stdc++.h>
#define lli long long int
#define mp(x) make_pair(x)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
using namespace std;
void solve()
{
 
}
int main()
{
   
    {
        string s1,s2;
        cin>>s1>>s2;
        map<char ,int>m;
        for(int i=0;i<s2.size();i++)
        {
            m[s2[i]]++;
        }
        string res="";
        for(int i=0;i<s1.size();i++)
        {
            if(m[s1[i]])
            {
                m[s1[i]]--;
            }
            else
            {
                res+=s1[i];
            }
        }
        cout<<res<<endl;
    }
    return 0;
}