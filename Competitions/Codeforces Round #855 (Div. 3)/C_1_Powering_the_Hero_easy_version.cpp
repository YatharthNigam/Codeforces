#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    priority_queue<int> pq;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            if (pq.empty())
                ans += 0;
            else
            {
                ans += pq.top();
                pq.pop();
            }
        }
        else
            pq.push(arr[i]);
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