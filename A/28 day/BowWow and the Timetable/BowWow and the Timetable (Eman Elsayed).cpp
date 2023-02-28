#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    cout << (count(s.begin(), s.end(), '1') > 1 ? (n + 1) / 2 : n / 2);
}