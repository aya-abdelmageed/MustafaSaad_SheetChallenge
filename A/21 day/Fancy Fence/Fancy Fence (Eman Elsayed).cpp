#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // regular polygon has 360 degree and each angle is 180 - n
    cout << (360 % (180 - n) == 0 ? "YES" : "NO") << endl;
}