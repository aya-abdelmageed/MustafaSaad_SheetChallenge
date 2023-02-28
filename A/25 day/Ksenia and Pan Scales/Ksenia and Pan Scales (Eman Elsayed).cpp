#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string before, after;
    bool flag = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '|')
        {
            flag = true;
            continue;
        }
        if (flag)
            after += s[i];
        else
            before += s[i];
    }
    string tmp;
    cin >> tmp;
    for (int i = 0; i < tmp.size(); i++)
    {
        if (before.size() < after.size())
            before += tmp[i];
        else
            after += tmp[i];
    }
    cout << (before.size() == after.size() ? before + "|" + after : "Impossible");
}