#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string n;
    cin >> n;
    string e = "", o = "";
    for (int i = 0; i < n.size(); i++)
    {
        if (i % 2 == 0)
            o += n[i];
        else
            e += n[i];
    }
    if (e.size() == 0)
    {
        cout << stoi(o) - 1 << endl;
        return;
    }
    cout << (stoi(o) + 1) * (stoi(e) + 1) - 2 << endl;
    return;
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