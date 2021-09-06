#include <bits/stdc++.h>
using namespace std;
#define int long long

bool cmp(pair<int, int> &p1, pair<int, int> &p2)
{
    if (p1.first != p2.first)
        return p1.first < p2.first;
    else
    {
        return p1.second > p2.second;
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        vector<int> temp;
        for (int j = 0; j < k; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        reverse(temp.begin(), temp.end());
        int pow = temp[0] + 1;
        for (int j = 1; j < k; j++)
        {
            pow = max(pow - 1, temp[j] - 1);
        }
        // cout << pow << endl;
        v.push_back({pow, k});
    }
    sort(v.begin(), v.end(), cmp);
    int ini = v[0].first;
    int ans = ini;
    for (int i = 1; i <= v.size(); i++)
    {
        ini += v[i - 1].second;
        ans += max(v[i].first - ini, 0ll);
        ini += max(v[i].first - ini, 0ll);
    }
    cout << ans << endl;
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