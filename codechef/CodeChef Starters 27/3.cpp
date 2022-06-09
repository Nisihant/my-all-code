#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define REPR(i, s, n) for (lli i = n-1; i>=s; i--)
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
 while(t--){
     string s,temp;
     cin>>s;
     temp=s;
     reverse(temp.begin(),temp.end());
     int a,b;
     int i=0;
     while(s[i]==temp[i])
    {
         i++;
         a++;
    }
    int j=i+1;
    while(temp[i]!=s[j])
    {
        j++;
    }
    
}
    return 0;
}