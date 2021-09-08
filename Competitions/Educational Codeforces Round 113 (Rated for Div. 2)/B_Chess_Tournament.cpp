#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char ans[n][n];
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '1')
        {
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == '1')
                {
                    ans[i][j] = '=';
                    ans[j][i] = '=';
                }
                else
                {
                    ans[i][j] = '+';
                    ans[j][i] = '-';
                }
            }
        }
        else
        {
            bool plus = true;
            for (int j = i + 1; j < n; j++)
            {
                if (s[j] == '1')
                {
                    ans[i][j] = '-';
                    ans[j][i] = '+';
                }
                else
                {
                    if (plus)
                    {
                        ans[i][j] = '+';
                        ans[j][i] = '-';
                        plus = false;
                    }
                    else
                    {
                        ans[i][j] = '-';
                        ans[j][i] = '+';
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '2')
        {
            bool check = true;
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    if (ans[i][j] == '+')
                    {
                        check = false;
                        break;
                    }
                }
            }
            if (check)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (i == j)
                cout << 'X';
            else
                cout << ans[i][j];
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}