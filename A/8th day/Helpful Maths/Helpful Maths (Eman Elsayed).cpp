// author : Eman Elsayed

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, ans;
    cin >> str;
    for (auto &i : str)
    {
        if (i != '+')
            ans += i; // add number to ans only
    }
    sort(ans.begin(), ans.end()); // sort in ascending order
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i]; // print number and + if not last number
        if (i != ans.size() - 1)
            cout << "+";
    }
}