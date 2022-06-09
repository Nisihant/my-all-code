#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    int arr[n];
    int rank=1;
    map <int,int> mp;
    for(int i=0;i<n;i++)
   {
        cin>>arr[i];
        if(mp[arr[i]]==0)
        {
            mp[arr[i]]=rank;
            rank++;
        }
   }
    cin>>m;
    int run;
    auto it=mp.begin();
    for(int i=0;i<m;i++)
    {
        cin>>run;
        for(it=mp.begin();it!=mp.end();it++)
        {
            if(run>it->first)
            {
                cout<<(it->second+1)<<endl;
                break;
            }
            else if(run==it->first)
            {
                cout<<it->second<<endl;
                break;
            }
        }     
    }
    if(it==mp.end())
    cout<<rank<<endl;
    return 0;
}
