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
    int n;
    cin>>n;
    map<int,multiset<string>>mset;
    while(n--)
    {
        string a;
        int marks;
        cin>>a>>marks;
        mset[-1*marks].insert(a);
    }
    for(auto it=mset.begin();it!=mset.end();it++)
    {
        for(auto temp=it->second.begin();temp!=it->second.end();temp++)
        cout<<*temp<<" "<<-1*it->first<<endl;
    }
    return 0;
}