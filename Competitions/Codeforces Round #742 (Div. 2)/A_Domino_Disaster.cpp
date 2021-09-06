#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'L')
            ans+='L';
        if(s[i] == 'R')
            ans+='R';
        if(s[i] == 'U')
            ans+='D';
        if(s[i] == 'D')
            ans+='U';
    }
    cout<<ans<<endl;
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
