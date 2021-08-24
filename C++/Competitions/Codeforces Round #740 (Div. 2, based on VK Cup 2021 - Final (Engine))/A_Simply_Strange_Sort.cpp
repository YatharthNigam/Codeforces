#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int mid = 1;
    while (!is_sorted(arr, arr + n))
    {
        if (mid % 2)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (((i + 1) % 2) and arr[i] > arr[i + 1])
                {
                    int temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
            }
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (!((i + 1) % 2) and arr[i] > arr[i + 1])
                {
                    int temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
            }
        }
        mid++;
    }
    cout << mid - 1 << endl;
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