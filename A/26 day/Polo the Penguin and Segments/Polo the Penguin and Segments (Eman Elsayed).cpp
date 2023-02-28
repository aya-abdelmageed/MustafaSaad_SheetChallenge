#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n, k, l, r, sum = 0;
    cin >> n >> k;
    while (n-- && cin >> l >> r)
    {
        sum += (r - l + 1);
    }
    cout << k - (sum % k ?: k);
}