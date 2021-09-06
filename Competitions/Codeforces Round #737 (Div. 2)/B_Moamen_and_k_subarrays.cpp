#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> copy(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        copy[i] = v[i];
    }
    sort(copy.begin(), copy.end());
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int iter = upper_bound(copy.begin(), copy.end(), v[i]) - copy.begin();
        while (iter < n and i < n - 1 and v[i + 1] == copy[iter])
        {
            i++;
            iter++;
        }
        count++;
    }
    if (n >= 2)
    {
        int iter = upper_bound(copy.begin(), copy.end(), v[n - 2]) - copy.begin();
        if (v[n - 1] != copy[iter])
            count++;
    }
    if (count <= k)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}