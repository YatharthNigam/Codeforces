#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        char arr[n][n];
        int A[4];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == '*')
                {
                    A[c] = i;
                    A[c + 1] = j;
                    c += 2;
                }
            }
        }
        if (A[0] == A[2])
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == A[0] + 1 && j == A[1])
                    {
                        cout << '*';
                    }
                    else if (i == A[2] + 1 && j == A[3])
                    {
                        cout << '*';
                    }
                    else
                    {
                        cout << arr[i][j];
                    }
                }
                cout << endl;
            }
        }
        else if (A[1] == A[3])
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == A[0] && j == A[1] + 1)
                    {
                        cout << '*';
                    }
                    else if (i == A[2] && j == A[3] + 1)
                    {
                        cout << '*';
                    }
                    else
                    {
                        cout << arr[i][j];
                    }
                }
                cout << endl;
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i == A[0] && j == A[3])
                    {
                        cout << '*';
                    }
                    else if (i == A[1] && j == A[2])
                    {
                        cout << '*';
                    }
                    else
                    {
                        cout << arr[i][j];
                    }
                }
                cout << endl;
            }
        }
    }
    return 0;
}