// https://codeforces.com/contest/1593/problem/B
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
        lli n;
        cin>>n;
        vector<int>vec;
        while(n>0)
        {
            vec.pb(n%10);
            n/=10;
        }
        lli mn=LLONG_MAX;
        for(int i=0;i<vec.size();i++)
        {
            for(int j=i+1;j<vec.size();j++)
            {
                if((vec[j]*10+vec[i])%25==0)
                {
                    int temp=i+(j-i-1);
                    if(mn>temp)
                    {
                        mn=temp;
                    }
                }
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}