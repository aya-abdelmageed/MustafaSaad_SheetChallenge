// Author : Shorok Atwa
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int cnt = 0;
    for (int i = 0; i < s2.length(); i++)
    {
        if (s1[cnt] == s2[i])
            ++cnt;
    }
    cout << ++cnt;
    return 0;
}