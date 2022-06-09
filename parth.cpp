#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN 
#define mod 1000000007
using namespace std;
int arr[10000];
int countprime[10000];
void sieve()
{
    for(int i=2;i*i<10000;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i*i;j<10000;j+=i)
            arr[j]=1;
        }
    }
}
int main()
{
    sieve();
    for(int i=2;i<1000;i++)
    if(arr[i]==0)
        countprime[i]=countprime[i-1]+1;
    else
    countprime[i]=countprime[i-1];

    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    float result=countprime[n]*0.5+(n-countprime[n])*0.3;
    cout<<"Total time taken by the counter is"<<endl;
    cout<<result<<endl;
    return 0;
}