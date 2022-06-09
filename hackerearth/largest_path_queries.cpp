#include<bits/stdc++.h>
using namespace std;
#define maxN 1000001
vector<int> arr(maxN);
vector<int>ans(maxN);
int main()
{
   
    for(int i=2;i<maxN;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i*i;j<maxN;j+=i)
        arr[j]=-1;
        }
    }
    for(int i=2;i<maxN;i++)
    {
        if(arr[i]==0)
        ans[i]=ans[i-1]+1;
        else
        ans[i]=ans[i-1];
    }
     int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<ans[n]<<endl;
    }
}