#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
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
    int t;
    cin>>t ;
    while(t--)
    {
        lli n,step=0;
        cin>>n;
        while(n>0)
        {
            if(n%2==0)
            {
                while(n%2==0)
                {
                    step++;
                    n/=2;
                }
            }
            else
            {
                n--;
                step++;
            }

        }
        if(step%2)
        cout<<"Alice"<<endl;
        else
        cout<<"Bob"<<endl;
    }
    return 0;
}