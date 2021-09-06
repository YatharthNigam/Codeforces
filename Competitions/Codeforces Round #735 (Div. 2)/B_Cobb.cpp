#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxim = (1 * 2) - (k * (arr[0] | arr[1]));
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // out<<((i+1)*(j+1))-(k*(arr[i]|arr[j]))<<endl;c
            int temp = (i + 1) * (j + 1) - (k * (arr[i] | arr[j]));
            if (temp > maxim)
            {
                maxim = temp;
            }
        }
    }
    cout << maxim << endl;
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
