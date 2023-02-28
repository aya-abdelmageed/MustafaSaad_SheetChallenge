#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    while (n > 0)
    {
        if (n & 1)
            cnt++;
        n /= 2;
    }
    cout << cnt << endl;
}