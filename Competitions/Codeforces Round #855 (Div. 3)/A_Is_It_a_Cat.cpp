#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    string result = "";
    char prev = ' ';
    for (char &c : str)
    {
        if (c != prev)
        {
            result += c;
            prev = c;
        }
    }
    if (result == "MEOW")
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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