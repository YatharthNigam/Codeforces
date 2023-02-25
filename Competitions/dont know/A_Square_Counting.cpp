#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, s, ans = 0;
    cin >> n >> s;
    while (s >= n * n and ans <= n+1)
    {
        ans++;
        s -= (n * n);
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