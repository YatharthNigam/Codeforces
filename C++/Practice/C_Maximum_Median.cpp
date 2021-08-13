#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int a[(n + 1) / 2];
    for (int i = ((n + 1) / 2) - 1; i < n; i++)
    {
        a[i - (((n + 1) / 2) - 1)] = arr[i];
    }
    int temp = 0;
    // cout << a[0] << endl;
    for (int i = 0; i < (n + 1) / 2; i++)
    {
        temp += arr[n - 1] - a[i];
    }
    // cout << temp << " temp" << endl;
    if (temp == k)
    {
        cout << arr[n - 1]<< endl;
    }
    else if (temp > k)
    {
        cout << a[0] << endl;
    }
    else
    {
        int ans = arr[n - 1] ;
        k = k - temp;
        while (k >= (n + 1) / 2)
        {
            k = k % (n + 1) / 2;
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}