#include<bits/stdc++.h>
using namespace std;

vector<int> par;

int find(int val){
    if(par[val] == val) return par[val];
    else{
        return par[val] = find(par[val]);
    }
}
int main(){

    
    int n , m;
    int a,b;
    cin>>n>>m;
    par = vector<int>(n);
    iota(par.begin(), par.end() , 0);


    while(m-- >0){
        cin>>a>>b;
        a--;
        b--;
        par[find(a)] = find(b);
    }
    
    // for(int i =0 ; i<n ;i++){
    //     cout<<i+1<<" "<<par[i]<<endl;
    // }

    vector<pair<int, int>> ans;
    int cnt =0;
    for( int i =0 ; i<n ;i++){
        if(find(0) != find(i)){
            cnt++;
            ans.push_back({find(0) +1, find(i) +1 });
            par[find(i)] = find(0);
        }
    }
    cout<<cnt<<endl;
    for( auto c:ans) cout<<c.first<<" "<<c.second<<endl;
    return 0;
}