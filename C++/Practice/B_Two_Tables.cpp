#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int W, H, x1, y1, x2, y2, w, h;
    cin >> W >> H;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> w >> h;
    int flag = int(1e9);
    if (x2 - x1 + w <= W)
    {
        flag = min(flag, max(0, w - x1));
        flag = min(flag, max(0, x2 - (W - w)));
    }
    if (y2 - y1 + h <= H)
    {
        flag = min(flag, max(0, h - y1));
        flag = min(flag, max(0, y2 - (H - h)));
    }
    if (flag == int(1e9))
        cout << -1 << endl;
    else
        cout << double(flag) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}