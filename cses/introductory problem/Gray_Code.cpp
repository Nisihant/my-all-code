#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define REPR(i, s, n) for (lli i = n-1; i>=s; i--)
#define maxN
#define mod 1000000007
using namespace std;
void gray(int a,int n)
{
    int arr[n], i=n-1;
    for(int i=0;i<n;i++)
    arr[i]=0;
    while(a)
    {
        arr[i]=a&1;
        a=a>>1;
        i--;
    }
    cout<<arr[0];
    for(int i=1;i<n;i++)
    cout<<(arr[i]^arr[i-1]);
}
int main()
{
    int n;
    cin>>n;
    int a=pow(2,n);
    for(int i=0;i<a;i++)
    {
        gray(i,n);
        cout<<endl;
    }
    return 0;
}