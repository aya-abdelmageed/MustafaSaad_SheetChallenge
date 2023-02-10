// author : Eman Elsayed
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int sz = str.size();
    if (sz > 10) // if string length is strictly greater than 10
        cout << str[0] << sz - 2 << str[sz - 1] << endl;
    else // else print the string as it is
        cout << str << endl;

    return 0;
}