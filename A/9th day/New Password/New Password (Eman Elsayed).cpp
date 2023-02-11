// author : Eman Elsayed

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch = 'a';
    int n, k;
    cin >> n >> k;
    string s;
    for (int i = 0; i < n; i++)
    {
        cout << char(ch + (i % k)); // 'a' + 0
                                    // 'a' + 1 = 'b'
                                    // 'a' + 0 = 'a'  as cycle
    }
}