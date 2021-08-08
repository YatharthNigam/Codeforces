#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i <= m; i++)
    {
        int temp = n ^ i;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    if (v[0] != 0)
    {
        cout << 0 << endl;
        return;
    }
    int flag = 0;
    for (auto i : v)
    {
        if (i == flag)
            flag++;
        if (i != flag and i != flag - 1)
            break;
    }
    cout << flag << endl;
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
