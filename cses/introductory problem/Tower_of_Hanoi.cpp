#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define REPR(i, s, n) for (lli i = n-1; i>=s; i--)
#define maxN
#define mod 1000000007
using namespace std;

void tower(int a,int from,int aux,int to){
    if(a==1){
       cout<<from<<" "<<to<<endl;
       return;
    }
    else{
       tower(a-1,from,to,aux);
       cout<<from<<" "<<to<<endl;
       tower(a-1,aux,from,to);
    }
}
int main()
{
int t=1;
//  cin>>t;	
 while(t--)
{
    int n;
    cin>>n;
    int step=1;
    for(int i=1;i<n;i++)
    step=step*2+1;
    cout<<step<<endl;
    tower(n,1,2,3);
}
    return 0;
}