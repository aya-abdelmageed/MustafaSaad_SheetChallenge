#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string dir;
    cin >> dir;
    vector<int> corr(dir.size());
    map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> corr[i];
    }
    int mn = OO;
    for (int i = 0; i < dir.size(); i++)
    {
        if (dir[i] == 'R' && dir[i + 1] == 'L')
        {
            mn = min(mn, (corr[i + 1] - corr[i]) / 2);
        }
    }
    cout << (mn == OO ? -1 : mn) << endl;
}