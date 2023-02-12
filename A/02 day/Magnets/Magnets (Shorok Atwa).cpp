// Author : Shorok Atwa
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b = 0;
    int countGroups = 0;
    while (t--)
    {
        cin >> a;
        if (a != b)
            countGroups++;
        b = a;
    }
    cout << countGroups;

    return 0;
}