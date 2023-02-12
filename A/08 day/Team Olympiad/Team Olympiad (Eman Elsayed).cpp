// author : Eman Elsayed

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> one, two, three;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
            one.push_back(i + 1); // there is a good at programming
        else if (x == 2)
            two.push_back(i + 1); // there is a good at math
        else
            three.push_back(i + 1); // there is a good at PE
    }
    int sz = min({one.size(), two.size(), three.size()}); // the minimum number of teams
    cout << sz << "\n";
    for (int i = 0; i < sz; i++) // print the teams one from each category
    {
        cout << one[i] << " " << two[i] << " " << three[i] << "\n";
    }
}