// Author : Shorok Atwa
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string p[6] = {"1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
    int ans = max(a, b);
    cout << p[6 - ans];
    return 0;
}