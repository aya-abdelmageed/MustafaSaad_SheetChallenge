// author : Eman Elsayed

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    if (a == b) // is two string are equal then there doesn't exist an uncommon subsequence
        cout << -1 << "\n";
    else // if not then the longest uncommon subsequence is the longest string
    {
        cout << max(a.size(), b.size());
    }
}