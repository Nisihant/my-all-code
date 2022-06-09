#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) (x).begin(), (x).end()


int main()
{

    int n;
    cin >> n;
    vector<int> vec(n), vec1(n);

    for(int i=0;i<n;i++)
    cin >> vec[i], vec1[i] = vec[i];

    sort(all(vec1));

    int l = -1;
    int r = -1;


    for(int i=0;i<n;i++)
    {
        if (vec[i] != vec1[i])
        {
            l = i + 1;
            break;
        }
    }

    for(int i=n-1;i>=0;i--)
    {
        if (vec[i] != vec1[i])
        {
            r = i + 1;
            break;
        }
    }

    cout << l << " " << r << endl;
    return 0;
}