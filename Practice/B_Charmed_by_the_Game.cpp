#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    int total = a + b;
    int ser1 = total / 2;
    int ser2 = total - ser1;
    set<int> s;
    for (int i = 0; i <= min(ser1, a); i++)
    {
        if (a - i <= ser2)
            s.insert(a - i + ser1 - i);
    }
    for (int i = 0; i <= min(ser2, a); i++)
    {
        if (a - i <= ser1)
            s.insert(a - i + ser2 - i);
    }
    cout << s.size() << endl;
    for (auto i : s)
        cout << i << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}