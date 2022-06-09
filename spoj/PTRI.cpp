#include<bits/stdc++.h>
#define lli long long int
#define pb(x) push_back(x)
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN 1e8+1
using namespace std;
vector<char>is_prime(maxN+1,true);
map<lli,pair<int,int>>m;

void seive()
{
    is_prime[0]=false;
    is_prime[1]=false;
    int row=1,col=1;
    for(lli i=2;i*i<=maxN;i++)
        {
            if(is_prime[i]==true)
            {
                m[i]={row,col};
                if(row>col)
                ++col;
                else
                if(row==col)
                    {
                        ++row;
                        col=1;
                    }
                        for(lli j=i*i;j<=maxN;j+=i)
                        {
                            is_prime[j]=false;
                        }
            }
        }
}

int main()
{
    seive();
    int t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        if(is_prime[n]==false)
        cout<<"-1"<<endl;
        else
        {
           cout<<m[n].first<<" "<<m[n].second<<endl;
        }
    }
    return 0;
}