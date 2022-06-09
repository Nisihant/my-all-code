#include<bits/stdc++.h>
using namespace std;
int main()
{
   
   int t;
    cin>>t;
    while(t--)
    {
        int n,w,great=0;;
        cin>>n>>w;
        int price[n+1];
        int vitamin[n+1];
        int dp[n+1][w+1];
     vector<pair<int,int>> vec;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            vec.push_back(make_pair(b,a));
        }
        sort(vec.begin(),vec.end());
        price[0]=0;
        vitamin[0]=0;
        for(int i=0;i<n;i++)
        {
            price[i+1]=price[i]+vec[i].first;
            vitamin[i+1]=vitamin[i]+vec[i].second;
        }
        for(int i=1;i<=n;i++)
        {
            if((price[i-1]+(price[i]-price[i-1])/2)<=w)
            great=vitamin[i];
        }
        cout<<great<<endl;
}
}