#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    // cout << (long long)ceil((double)n / a) * ceil((double)m / a) << endl;
    cout << (long long)(n / a + (n % a ? 1 : 0)) * (m / a + (m % a ? 1 : 0)) << endl;
}