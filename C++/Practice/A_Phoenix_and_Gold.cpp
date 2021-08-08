#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, flag = -1, sum = 0;
        cin >> n >> x;
        int w[n];
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
        }
        sort(w, w + n);
        for (int i = 0; i < n; i++)
        {
            sum += w[i];
            if (sum == x)
            {
                flag = i;
                break;
            }
        }
        if (flag == n - 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            if (flag!=-1)
            {
                for (int i = 0; i < n; i++)
                {
                    if (i == flag)
                        continue;
                    cout << w[i] << " ";
                }
                cout << w[flag];
            }
            else
            {
                for (int i = 0; i < n; i++)
                    cout << w[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}