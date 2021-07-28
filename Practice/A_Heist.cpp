#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, min = INT_MAX, max = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    cout << (max - min + 1) - n << endl;
    return 0;
}