#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,l,r,k;
    cin >> n>>l>>r>>k;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int ans = 0;
    sort(arr, arr+n);
    for(int i=0;i<n;i++) {
        if(arr[i]>=l and arr[i]<=r) {
            if(arr[i]>k)
                break;
            else {
                ans++;
                k-=arr[i];
            }
        }
    }
    cout<<ans<<endl;
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