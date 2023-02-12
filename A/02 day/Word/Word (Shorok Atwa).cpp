// Author : Shorok Atwa
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int countUpper = 0, countLower = 0;
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == toupper(s[i]))
            countUpper++;
        else
            countLower++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (countUpper > countLower)
        {
            s[i] = toupper(s[i]);
        }
        else
        {
            s[i] = tolower(s[i]);
        }
    }
    cout << s;
    return 0;
}