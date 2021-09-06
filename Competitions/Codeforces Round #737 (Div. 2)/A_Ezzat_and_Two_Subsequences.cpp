#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, idx, sum = 0;
    int maxim = INT_MIN;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxim = max(maxim, arr[i]);
        sum += arr[i];
    }
    sum = sum - maxim;
    double avg = (double)sum / (n - 1);
    std::cout << std::fixed;
    std::cout << std::setprecision(9);
    std::cout << avg + (double)maxim << endl;
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