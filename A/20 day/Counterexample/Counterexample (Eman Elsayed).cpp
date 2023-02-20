#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    n += n & 1;    // to make n even because at least 2 even numbers are needed
    if (m - n < 2) // if interval is less than 2 then there is no solution
    {
        cout << -1 << "\n";
    }
    else
    {
        cout << n << " " << n + 1 << " " << n + 2 << "\n";
    }
    return 0;
}