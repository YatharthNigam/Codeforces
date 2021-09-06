#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[2 * n][2];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i][0] >> arr[i][1];
        }
        if (m % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            bool flag = true;
            for (int i = 0; i < 2 * n; i += 2)
            {
                if (arr[i][1] == arr[i + 1][0])
                {
                    cout << "YES" << endl;
                    flag = false;
                    break;
                }
            }
            if (flag)
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}