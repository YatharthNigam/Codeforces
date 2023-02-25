#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 0, r = n - 1;
    while (l < r)
    {
        if (s[l] != s[r])
        {
            s[l] = '.';
        }
        l++;
        r--;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            while (s[i] == '.')
                i++;
            cnt++;
            i--;
        }
        if (cnt > 1)
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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