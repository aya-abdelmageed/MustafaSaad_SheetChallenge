#include <bits/stdc++.h>
using namespace std;

map<string, int> mp; // map to store the name of the team and the number of times it appears
int main()
{
    int t = 1;
    cin >> t; // test cases
    while (t--)
    {
        string str;
        cin >> str;
        mp[str]++; // increase the number of times the team appears
    }
    int mx = 0;
    string ans;
    for (auto &i : mp)
    {
        if (i.second > mx) // find the team that appears the most
        {
            mx = i.second;
            ans = i.first;
        }
    }
    cout << ans << endl; // print the name of the team
}
