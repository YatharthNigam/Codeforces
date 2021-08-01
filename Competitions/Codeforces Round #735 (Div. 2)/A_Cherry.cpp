#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, maxm = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (i == 0)
        {
            if (a[i] * a[i + 1] > maxm)
                maxm = a[i] * a[i + 1];
        }
        else
        {
            if (max(a[i] * a[i + 1], a[i] * a[i - 1]) > maxm)
                maxm = max(a[i] * a[i + 1], a[i] * a[i - 1]);
        }
    }
    cout<<maxm<< endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
