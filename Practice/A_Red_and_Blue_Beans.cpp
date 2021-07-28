#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, b, d;
        cin >> r >> b >> d;
        if (abs(r - b) <= d)
        {
            cout << "YES"
                 << "\n";
            continue;
        }
        if (r > b)
            swap(r, b);
        if (r * (d + 1LL) < b)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            cout << "YES"
                 << "\n";
        }
    }
    return 0;
}