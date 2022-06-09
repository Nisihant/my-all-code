#include <bits/stdc++.h>
#define lli long long int
#define mp(x, y) make_pair(x, y)
#define pb(x) push_back(x)
#define REP(i, s, n) for (lli i = s; i < n; i++)
#define REPR(i, s, n) for (lli i = n - 1; i >= s; i--)
#define maxN
#define mod 1000000007
using namespace std;
int dirX[4] = {1, 0, 0, -1};
int dirY[4] = {0, 1, -1, 0};
char move[4] = {'D', 'R', 'L', 'U'};
string s;


int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cin >> s;
        int count = 0, poss = 1, lst = 0, step = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
                count++;
            else
                count--;

            if (count < 0)
                poss = 0;

            if ((count == 0 && poss) || (i - lst + 1 >= 2 && s[lst] == s[i]))
            {
                count = 0;
                poss = 1;
                lst = i + 1;
                step++;
            }
        }

        cout << step << " " << n - lst << endl;
    }
    return 0;
}