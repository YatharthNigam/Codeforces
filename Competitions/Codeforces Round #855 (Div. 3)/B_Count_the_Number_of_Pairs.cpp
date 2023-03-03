#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    vector<int> upperFreq(26, 0);
    vector<int> lowerFreq(26, 0);
    for (auto i : str)
    {
        if (isupper(i))
            upperFreq[i - 'A'] += 1;
        else
            lowerFreq[i - 'a'] += 1;
    }
    int burls = 0;
    for (int i = 0; i < 26; i++)
    {
        int temp = min(lowerFreq[i], upperFreq[i]);
        burls += temp;
        lowerFreq[i] -= temp;
        upperFreq[i] -= temp;
    }
    int i = 0;
    while (i < 26)
    {
        lowerFreq[i] = max(lowerFreq[i], upperFreq[i]);
        if (lowerFreq[i] < 2)
        {
            i++;
            continue;
        }
        int temp = lowerFreq[i] / 2;
        burls += min(temp, k);
        k -= min(temp, k);
        if (k == 0)
            break;
        i++;
    }
    cout << burls << endl;
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