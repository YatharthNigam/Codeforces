#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    if(n%3==0)
        cout<<n/3<<endl;
    else if(n%2==0)
        cout<<n/2<<endl;
    else {
        int count = 0;
        while(n > 2) {
            n = n/3;
            count++;
        }
        if(n == 1) {
            cout<<count+2 << endl;
        }
        else {
            cout<<count+1<<endl;
        }
    }
    return;
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