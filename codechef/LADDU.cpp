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
    int t;
    cin>>t;
    while(t--)
    {
        lli res=0;
        int a;
        string b;
        cin>>a>>b;
        REP(i,0,a)
        {
            string ch;
            cin>>ch;
            if(ch=="CONTEST_WON")
            {
                int rank;
                cin>>rank;
                res+=300+max(0,20-rank);
            }
            else
            if(ch=="TOP_CONTRIBUTOR")
            {
                res+=300;
            }
            else
            if(ch=="BUG_FOUND")
            {
                int bug;
                cin>>bug;
                res+=bug;
            }
            else
            {
                res+=50;
            }
        }
        if(b=="INDIAN")
        cout<<res/200<<endl;
        else
        cout<<res/400<<endl;
    }
    return 0;
}