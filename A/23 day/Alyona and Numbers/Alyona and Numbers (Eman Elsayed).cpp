#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, m;
    cin >> n >> m;
    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += (m + i) / 5 - i / 5;
    }
    cout << ans << endl;
}