// Author Eman Elsayed

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    // transform the string a to lowercase Because The letters' case does not matter
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    // and transform the string b to lowercase
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    // if a < b print -1 and a > b print 1 and a = b print 0 -> ternary operator
    cout << (a < b ? "-1" : a > b ? "1"
                                  : "0");
}