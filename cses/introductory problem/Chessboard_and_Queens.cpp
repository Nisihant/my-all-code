#include<bits/stdc++.h>
#define lli long long int
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define REPR(i, s, n) for (lli i = n-1; i>=s; i--)
#define maxN
#define mod 1000000007
using namespace std;
char arr[8][8];
bool column[8],leftdiagonal[14],rightdiagonal[14];
lli ans=0;
bool isvalid(int row,int col)
{
 if(!column[col] && !rightdiagonal[row+col] && !leftdiagonal[row-col+7] && arr[row][col]!='*')
  return true;
  else
  return false;
}
void solve(int row)
{       
          if(row==8)
               {
                   ans++;
                   return;
               }  
       for(int col=0;col<8;col++)
       {
           if(isvalid(row,col))
           {
               
               column[col]=true;
               rightdiagonal[row+col] =true;
               leftdiagonal[row-col+7]=true;
               solve(row+1);
               column[col]=false;
               rightdiagonal[row+col] =false;
               leftdiagonal[row-col+7]=false;
           }
       }
}
int main()
{
int t=1;

 while(t--)
{
    
	REP(i,0,8)
    REP(j,0,8) cin>>arr[i][j];
    solve(0);
    cout<<ans<<endl;

}
    return 0;
}