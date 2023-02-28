#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<char>> v(4, vector<char>(4));
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> v[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            map<char, int> mp;
            mp[v[i][j]]++, mp[v[i][j + 1]]++, mp[v[i + 1][j]]++, mp[v[i + 1][j + 1]]++;
            if (mp.size() == 1 || mp.begin()->second == 3 || mp.rbegin()->second == 3)
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}