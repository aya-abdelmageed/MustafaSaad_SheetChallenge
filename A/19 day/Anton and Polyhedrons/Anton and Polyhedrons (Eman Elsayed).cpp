#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    map<string, int> mp;
    ll sum = 0;
    mp["Tetrahedron"] = 4;
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;
    for (int i = 0; i < n; i++)
    {
        string entry;
        cin >> entry;
        sum += mp[entry];
    }
    cout << sum << "\n";
}