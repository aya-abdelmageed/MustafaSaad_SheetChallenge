#include <bits/stdc++.h>
using namespace std;
#define ll long long
// use this function to calculate the power of a number in O(logn) time
// fast power function
ll power(ll x, ll y, ll p)
{
    ll res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    // use Mod 10 to get the last digit
    cout << power(1378, n, 10);
}