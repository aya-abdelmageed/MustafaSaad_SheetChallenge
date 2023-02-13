#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    // 1 3 5 7 2 4 6
    n = ceil(n / 2.0);
    if (k > n) // if k is in the second half then the number will be even
    {
        cout << 2 * (k - n) << "\n";
    }
    else // if k is in the first half then the number will be odd and the number will be 2*k-1
    {
        cout << 2 * (k)-1 << "\n";
    }
}