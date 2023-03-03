#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    string s1, s2;
    cin >> s1 >> s2;
    bool flag = false;
    map<char, int> m1, m2;
    for (int i = 0; i < n; i++)
    {
        m1[s1[i]]++;
        m2[s2[i]]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (m1[i + 'a'] != m2[i + 'a'])
        {
            flag = true;
            break;
        }
    }
    for (int i = 0; i < min(n, k); i++)
    {
        if (k > (n - (i + 1)))
        {
            if (s1[i] != s2[i])
            {

                flag = true;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
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