#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int circleSize = abs(a - b) * 2;
    if (circleSize < max(max(a,b),c))
    {
        cout << -1 << endl;
        return;
    }
    if ((c + (circleSize / 2) )> circleSize)
        c = c + (circleSize / 2) - circleSize;
    else
        c = c + (circleSize / 2);
    cout << c << endl;
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