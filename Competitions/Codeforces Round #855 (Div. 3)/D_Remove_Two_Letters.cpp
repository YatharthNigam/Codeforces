#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int count = n - 1;

    for (int i = 1; i < n - 1; i++)
    {
        char prev = str[i - 1];
        char next = str[i + 1];
        // same pair of characters will be removed. hence no difference.
        if (prev == next)
        {
            count -= 1;
        }
    }
    cout << count << endl;
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