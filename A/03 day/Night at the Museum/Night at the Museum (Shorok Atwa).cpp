// Author : Shorok Atwa
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    char st = 'a';
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        ans += min(abs(s[i] - st), 26 - abs(s[i] - st));
        st = s[i];
    }
    cout << ans;
    return 0;
}