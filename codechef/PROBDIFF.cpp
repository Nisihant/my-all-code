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
    	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    map<int,int>mp;
	    for(int i=0;i<4;i++)
	    {
	        int a;
	        cin>>a;
	        mp[a]++;
	    }
	    if(mp.size()>=3)
	    cout<<2<<endl;
	    else
	    if(mp.size()==2)
	    {
	        if(mp.begin()->second==2&&(--mp.end())->second==2)
	        cout<<2<<endl;
	        else
	        cout<<1<<endl;
	    }
	    else
	    cout<<0<<endl;
	}
    return 0;
}