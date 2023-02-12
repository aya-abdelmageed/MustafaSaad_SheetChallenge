// EMan Mohamed
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> grid;
    for (int i = 0; i < 4; i++)
    {
        int x;
        cin >> x;
        grid.push_back(x);
    }
    string s;
    cin >> s;
    int n = s.size(), res = 0;
    for (int i = 0; i < n; i++)
    {
        int x = s[i] - '0';
        x--;
        res += grid[x];
    }
    cout << res;
}