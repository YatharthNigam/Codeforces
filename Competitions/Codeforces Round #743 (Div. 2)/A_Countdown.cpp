#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        int temp = ('0' <= s[i] && s[i] <= '9') ? s[i] - '0' : 0;
        if (temp > 0 and i == n - 1)
            ans += (temp);
        else if (temp > 0)
            ans += (temp + 1);
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