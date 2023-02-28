#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        int n = str[i] - '0';
        n = min(n, 9 - n);
        if (i == 0 && str[i] == '9')
            continue;
        str[i] = n + '0';
    }
    cout << str << endl;
}