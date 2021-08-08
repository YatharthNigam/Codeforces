#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int n;
    cin>>n;
    ll p, q, r;
    cin>>p>>q>>r;
    ll arr[n+1][3];
    arr[0][0] = arr[0][1] = arr[0][2] = LLONG_MIN;
    int elems[n];
    for (int i = 0; i < n; i++)
        cin >> elems[i];
    for (int i = 0; i < n; i++)
    {
        arr[i + 1][0] = max(arr[i][0], p * elems[i]);
    }
    for (int i = 1; i <=2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[j+1][i] = max(arr[j][i], (i==1 ? q : r) *(ll) elems[j] + arr[j + 1][i - 1]);
        }
    }
    cout << arr[n][2] << endl;
    return 0;
}