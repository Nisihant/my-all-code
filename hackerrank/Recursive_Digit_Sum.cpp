
#include<bits/stdc++.h>
#define lli long long int
#define make_pair mp
#define push_back pb
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN
using namespace std;
lli digitsum(lli num)
{
    int sum=0;
    while(num>0)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}
int superdigit(lli num)
{
    if(num/10==0)
    return num;
    else
    return superdigit(digitsum(num));
}
int main()
{
    string n;
    int k;
    cin>>n>>k;
    lli num=0;
    for(int i=0;i<n.size();i++)
    {
        num+=(n[i]-48);
    }
    cout<<superdigit(num*k)<<endl;
    return 0;
}