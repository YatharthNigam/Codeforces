#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll n;
    int flag = 0;
    cin >> n;
    while (n != 0)
    {
        if (n % 10 == 1)
            n = n / 10;
        else if (n % 100 == 14)
            n = n / 100;
        else if (n % 1000 == 144)
            n = n / 1000;
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}