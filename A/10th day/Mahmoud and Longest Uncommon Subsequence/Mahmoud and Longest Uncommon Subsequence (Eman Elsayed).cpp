// author : Eman Elsayed

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    if (a == b) // if the two string are equal then doesn't exist an uncommon subsequence
        cout << -1 << "\n";
    else
    {
        cout << max(a.size(), b.size()); // else then i can take the string that has greatest size
    }
}
