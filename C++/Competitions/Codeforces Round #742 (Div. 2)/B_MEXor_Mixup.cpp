#include <bits/stdc++.h>
using namespace std;
#define int long long

int computeXOR(int n)
{
    if (n % 4 == 0)
        return n;

    if (n % 4 == 1)
        return 1;

    if (n % 4 == 2)
        return n + 1;

    return 0;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    int x = computeXOR(a - 1) ^ 0;
    // cout<<x<<endl;
    if (x == b)
    {
        cout << a << endl;
        return;
    }
    else if ((x ^ b) == a)
        cout << a + 2 << endl;
    else
        cout << a + 1 << endl;
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