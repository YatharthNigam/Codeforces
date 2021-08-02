#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, ans = 0;
    cin >> n;
    string e, g;
    cin >> e >> g;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (g[i] == '1')
            {
                if (e[i] == '0')
                {
                    ans++;
                    e[i] = '2';
                }
                else if (e[i + 1] == '1')
                {
                    ans++;
                    e[i + 1] = '2';
                }
            }
        }
        else if (i == n - 1)
        {
            if (g[i] == '1')
            {
                if (e[i] == '0' or e[i - 1] == '1')
                {
                    ans++;
                }
            }
        }
        else
        {
            if (g[i] == '1')
            {
                if (e[i] == '0')
                {
                    ans++;
                    e[i] = '2';
                }
                else if (e[i - 1] == '1')
                {
                    ans++;
                    e[i - 1] = 2;
                }
                else if (e[i + 1] == '1')
                {
                    ans++;
                    e[i + 1] = '2';
                }
            }
        }
    }
    cout << ans << endl;
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
