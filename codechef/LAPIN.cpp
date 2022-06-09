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
        string s,s1,s2;
        cin>>s;
        if(s.size()%2==0)
        {
            s1=s.substr(0,s.size()/2);
            s2=s.substr(s.size()/2,s.size()-1);
        }
        else
        {
            s1=s.substr(0,s.size()/2);
            s2=s.substr(s.size()/2+1,s.size()-1);
        }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    }
    return 0;
}   
