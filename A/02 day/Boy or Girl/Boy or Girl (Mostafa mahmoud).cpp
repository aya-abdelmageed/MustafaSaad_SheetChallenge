#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int count = 0;
    // sort the string to make the same characters next to each other,then count the number of different characters
    sort(s.begin(), s.end());
    for (int i = 0; i < n; i++)
    {
        if (s[i] != s[i + 1])
        {
            count++;
        }
    }
    // boy or girl
    if (count % 2 == 1)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }
}