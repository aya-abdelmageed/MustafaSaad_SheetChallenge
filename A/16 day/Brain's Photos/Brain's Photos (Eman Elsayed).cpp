#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));
    map<char, bool> mp; // map to store the color of the pixel and check if it appears or not
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            mp[v[i][j]] = true; // mark the color of the pixel as true
        }
    }
    for (auto &i : mp)
    {
        // if the photo is not black-and-white then print #Color
        if (i.first != 'B' && i.first != 'W' && i.first != 'G')
        {
            cout << "#Color \n";
            return;
        }
    }
    // if the photo is black-and-white then print #Black&White
    cout << "#Black&White \n";
}