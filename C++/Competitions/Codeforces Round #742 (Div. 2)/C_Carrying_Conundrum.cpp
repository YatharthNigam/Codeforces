#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0)
    {

        long long sr = sqrt(x);

        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}

void solve()
{
    int n;
    cin >> n;
    if (n < 10)
    {
        cout<<n-1<<endl;
        return;
    }
    if (isPerfectSquare(n))
    {
        cout << sqrt(n) - 1 << endl;
        return;
    }
    double temp = sqrt(n);
    if(n%2==0)
     cout<<ceil(temp)<<endl;
     else
     cout<<floor(temp)<<endl;

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
