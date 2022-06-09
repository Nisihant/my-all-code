#include<bits/stdc++.h>
#define lli long long int
#define mp(x) make_pair(x)
#define pb(x) push_back(x)
#define pii pair<int,int>
#define REP(i,s,n) for(lli i=s;i<n;i++)
#define maxN 1000005
using namespace std;
template <typename T> T exp(T b, T p){T x = 1;while(p){if(p&1)x=(x*b);b=(b*b);p=p>>1;}return x;}
vector<char>is_prime(maxN+1,true);
lli arr[1000000];
void seive()
{
    is_prime[0]=false;
    is_prime[1]=false;
    for(lli i=2;i*i<=maxN;i++)
    {
        if(is_prime[i]==true)
        {
            for(lli j=i*i;j<=maxN;j+=i)
            {
                is_prime[j]=false;
            }
        }
    }
}
bool toBeAfraid(lli num){
	lli dig = 0;
	lli tmpNum = num;
	while(num > 0){
		if(num%10 == 0)
			return false;
		dig++;
		num /= 10;
	}
	lli div = exp(10LL, dig-1);
	num = tmpNum;
	while(num > 0){
		num %= div;
		div /= 10;
		if((num != 0 && is_prime[num] == false))
			return false;
	}
	return true;
}
void presolve()
{
    for(lli i=2;i<=1000000;i++)
    {
        arr[i]=arr[i-1];
        if(is_prime[i]==true)
        {
           
           if(toBeAfraid(i))
            arr[i]++;
        }
    }
}
int main()
{
    seive();
    presolve();
    int t;
    cin>>t;
    while(t--)
    {
        lli n;
        cin>>n;
        cout<<arr[n]<<endl;
    }
    return 0;
}