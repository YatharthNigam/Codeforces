#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin>>s;
    if (n == 1)
    {
        cout << -1 << " " << -1 << endl;
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == 'a' and s[i + 1] == 'b' || s[i] == 'b' and s[i + 1] == 'a')
        {
            cout << i+1 << " " << i + 2 << endl;
            return;
        }
    }
    cout << -1 << ' ' << -1 << endl;
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