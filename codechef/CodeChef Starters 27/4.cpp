#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define REPR(i, s, n) for (lli i = n-1; i>=s; i--)
#define maxN 10001
#define mod 1000000007
using namespace std;
int vec[maxN];
void findseive()
{
    for(int i=2;i*i<=maxN;i++)
    {
        if(vec[i]==i)
        {
            for(int j=i*i;j<maxN;j+=i)
           {
               if(vec[j]==j)
                vec[j]=i;
           }
        }
    }
}
void solve()
{
 
}
int main()
{
    for(int i=0;i<maxN;i++)
    {
        vec[i]=i;
    }
    findseive();

// for(int i=2;i<=10;i++)
// cout<<vec[i]<<" ";
int t;
 cin>>t;	
 while(t--){
     int n;
     cin>>n;
     int arr[n];
     REP(i,0,n) cin>>arr[i];
     map<int,int>mp;
     for(int i=0;i<n;i++)
     {
         mp[vec[arr[i]]]++;
     }
     int mx=0,p;
     for(auto it=mp.begin();it!=mp.end();it++)
     {
        //  cout<<it->first<<" "<<it->second<<endl;
         if(mx<it->second)
         {
             mx=it->second;
             p=it->first;
         }
     }
  
     
     for(int i=0;i<n;i++)
     {
         if(arr[i]%p==0)
         cout<<arr[i]<<" ";
         else
         cout<<p<<" ";
     }
     cout<<endl;

}
    return 0;
}