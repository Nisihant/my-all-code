// https://codeforces.com/contest/1619/problem/C
#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
#define mod 1000000007
using namespace std;
vector<int> vec;
void solve()
{
 
}
int main()
{
    int t;
    cin>>t;
    bool check=false;
    while(t--)
    {
        vec.clear();
        lli a,s,b=0;
        cin>>a>>s;
        while(s>0)
        {
            int l,m;
            l=s%10;
            s/=10;
            m=a%10;
            a/=10;

            if(l<m)
            {
                int k=s%10;
                l+=k*10;
                s/=10;
            }
            if(l-m>9)
            {
                check=true;
                break;
            }
            vec.push_back(l-m);
            if(a==0&&s/10!=0)
            check=true;
        }
        lli ans=0;
        reverse(vec.begin(),vec.end());
        for(int ec:vec)
        ans=ans*10+ec;
        if(a||s||check)
        cout<<-1<<endl;
        else

 cout<<ans<<endl;   
    }
    return 0;
}