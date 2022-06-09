#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define REPR(i, s, n) for (lli i = n - 1; i >= s; i--)
#define maxN
#define mod 1000000007
using namespace std;
void solve()
{
}
int countCollisions(string s)
{
	stack<char> st;
	int i = 0;
	while (s[i] == 'L')
		i++;
	int ans = 0;

	for (; i < s.size(); i++)
	{
		if (st.empty())
		{
			st.push(s[i]);
		}
	    else if (s[i] == st.top())
		{
			st.push(s[i]);
		}
		if (st.top() == 'R' && s[i] == 'L')
		{
			ans += 2;
			st.pop();
			st.push('S');
		}
		if (s[i] == 'L' && st.top() == 'S')
			ans++;
		if(s[i]=='S')
		{
			while(st.top()=='R')
			ans++,st.pop();
		}
	}
	return ans;
}
int main()
{
	int t;
	cin >> t;
	
	
	while(t--){
		string s;
	cin >> s;
		cout<<countCollisions(s)<<endl;
	}
	return 0;
}