#include<bits/stdc++.h>
#define lli long long int
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
using namespace std;
int solve(string &s,int n)
{
    map<int,int>small;
    map<int,int>large;
    int count=0;
     for(int i=0;i<26;i++)
     {
         small[i]=0,large[i]=0;
     }
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        ++small[s[i]-97];
        else
        if(i%2==1)
        {
            if(small[s[i]-65]==0)
            count++;
            else
            small[s[i]-65]--;
        }
    }
    
    return count;
}
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<solve(s,2*n-2)<<endl;
    return 0;
}