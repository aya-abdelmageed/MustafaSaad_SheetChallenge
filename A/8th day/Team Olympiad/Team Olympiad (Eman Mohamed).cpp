//              بسم الله الرحمن الرحيم

// author Eman Mohamed
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
            one.push_back(i+1);
        else if (x == 2)
            two.push_back(i+1);
        else
            three.push_back(i+1);
    }
    int sz = min({one.size(), two.size(), three.size()});
    cout << sz << "\n";
    for (int i = 0; i < sz; i++)
    {
        cout << one[i] << " " << two[i] << " " << three[i] << "\n";
    }
}