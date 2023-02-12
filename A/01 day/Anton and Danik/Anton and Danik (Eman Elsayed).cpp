// author Eman Elsayed

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        // count the number of Anton and Danik
        if (s[i] == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    // if Anton > Danik print Anton
    if (a > d)
    {
        cout << "Anton";
    }
    // if Danik > Anton print Danik
    else if (a < d)
    {
        cout << "Danik";
    }
    // if Anton = Danik print Friendship
    else
    {
        cout << "Friendship";
    }
    return 0;
}