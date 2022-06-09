// https://www.codechef.com/START15B/problems/NPAIRS
#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
#define mod 1000000007
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
        cin>>n;
        string s;
        cin>>s;
        map<int,int>m1,m2;
        for(int i=0;i<n;i++)
        {
            int num=s[i]-'0';
            // cout<<num-1-i<<" ";
            m1[num-i-1]++;
        }
        // cout<<endl;
        for(int i=n-1;i>=0;i--)
        {
            int num=s[i]-'0';
            m2[num-(n-i)]++;
            // cout<<num-(n-i)<<" ";
        }
        // cout<<endl;
        int count=0;
        for(auto it=m1.begin();it!=m1.end();it++)
        {
            int sec=it->second;
            if(sec>=2)
            count+=(sec*(sec-1))/2;
        }
        for(auto it=m2.begin();it!=m2.end();it++)
        {
            int sec=it->second;
            if(sec>=2)
            count+=(sec*(sec-1))/2;
        }
        cout<<count<<endl;
    }
    return 0;
}