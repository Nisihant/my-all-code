    #include <bits/stdc++.h>
    #define lli long long int
    #define mp(x, y) make_pair(x, y)
    #define pb(x) push_back(x)
    #define REP(i, s, n) for (lli i = s; i < n; i++)
    #define REPR(i, s, n) for (lli i = n - 1; i >= s; i--)
    #define maxN
    #define mod 1000000007
    using namespace std;
    const int INF = INT_MAX;
    int dirX[4] = {1, 0, 0, -1};
    int dirY[4] = {0, 1, -1, 0};
    char move[4] = {'D', 'R', 'L', 'U'};
    bool visited[100001];

    int k;
    lli dp[100001];
    lli pre[100001];
    int getAns(int n)
    {
        if (n == 0)
            return 1;

        lli ans = 0;
        if(dp[n]!=-1) return dp[n]%mod;


        // red
        ans+=getAns(n-1),ans=ans%mod;

        //white
        if(n>=k)
        ans+=getAns(n-k),ans=ans%mod;

        return dp[n]=ans%mod;
    }
    void init()
    {
        REP(i,0,100001)
        dp[i]=-1;
    }
    int main()
    {
        init();
        int t = 1;
        cin >> t >> k;
        
        pre[0]=0;
        for(int i=0;i<=100000;i++)
        {
            pre[i]=pre[i-1]+getAns(i);
        }
        while (t--)
        {
            int a, b;
            cin>>a>>b;
        cout<<(pre[b]-pre[a-1]+mod)%mod<<endl;
        
        }
        return 0;
    }