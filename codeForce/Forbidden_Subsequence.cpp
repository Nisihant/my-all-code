// https://codeforces.com/contest/1617/problem/A
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
        string s,l;
        cin>>s>>l;
        
        map<char,lli>mp;
        REP(i,0,s.size())
        mp[s[i]]++;
        string temp=s;
        sort(temp.begin(),temp.end());
        if(l[0]=='a'&&l[1]=='b'&&l[2]=='c'&&mp['a']!=0&&mp['b']!=0&&mp['c']!=0)
        {
            temp="";
            for(int i=0;i<mp['a'];i++)
            temp.push_back('a');

            for(int i=0;i<mp['c'];i++)
            temp.push_back('c');

            for(int i=0;i<mp['b'];i++)
            temp.push_back('b');

            for(auto it=mp.begin();it!=mp.end();it++)
            {
                if(it->first=='a'||it->first=='b'||it->first=='c')
                continue;

                for(int i=0;i<it->second;i++)
                temp.push_back(it->first);
            }
        }

        cout<<temp<<endl;

    }
    return 0;
}