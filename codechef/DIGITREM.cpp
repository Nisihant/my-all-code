//question link  https://www.codechef.com/OCT21B/problems/DIGITREM
#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define pii pair<int, int>
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define maxN 11
using namespace std;
int arr[maxN];
void solve()
{
}
int main()
{
    lli n, t, d;
    cin >> t;
    while (t--)
    {
        cin >> n >> d;
        string sol = to_string(n);
        if (d == 0)
        {
            int tempind = sol.length();
            for (int i = 0; i < sol.length(); i++)
            {
                if (sol[i] == '0')
                {
                    tempind = i;
                    break;
                }
            }
            for (int i = tempind; i < sol.length(); i++)
                sol[i] = '1';
        }
        else if (d == 9)
        {
            if (sol[0] == '9')
            {
                for (int i = 0; i < sol.length(); i++)
                    sol[i] = '0';
                sol = '1' + sol;
            }
            else
            {
                int tempind = sol.length();
                for (int i = 0; i < sol.length(); i++)
                {
                    if (sol[i] == '9')
                    {
                        tempind = i;
                        break;
                    }
                }
                for (int i = tempind; i < sol.length(); i++)
                {
                    sol[i] = '0';
                }
                if (tempind < sol.length())
                {
                    if (sol[tempind - 1] < '8')
                    {
                        sol[tempind - 1] += 1;
                    }
                    else
                    {
                        tempind -= 1;
                        while (sol[tempind] == '8' && tempind > 0)
                        {
                            sol[tempind] = '0';
                            tempind--;
                        }
                            sol[tempind] += 1;
                            if(sol[0]=='9')
                            {
                                sol[0]='0';
                                sol='1'+sol;
                            }
                    }
                }
            }
        }
        else
        {
            int tempind = sol.length();
            for (int i = 0; i < sol.length(); i++)
            {
                int z = '0';
                if (sol[i] == d + z)
                {
                    tempind = i;
                    break;
                }
            }
            sol[tempind] += 1;
            for (int i = tempind + 1; i < sol.length(); i++)
            {
                sol[i] = '0';
            }
        }
        lli final=0;
        for(int i=0;i<sol.length();i++)
        {
            final=final*10+(sol[i]-'0');
        }
        cout<<final-n<<endl;
    }
    return 0;
}