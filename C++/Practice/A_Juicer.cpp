#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n, b, d, mix = 0;
    ll ans = 0;
    cin >> n >> b >> d;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= b)
        {
            mix += arr[i];
            if (mix > d)
            {
                ans++;
                mix = 0;
            }
        }
    }
    cout << ans << endl;
    return 0;
}