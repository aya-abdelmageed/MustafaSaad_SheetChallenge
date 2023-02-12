
// EMan Mohamed
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> grid(n);
    for (auto &i : grid)
        cin >> i;
    sort(grid.begin(), grid.end());
    for (auto &i : grid)
        cout << i << " ";
    cout << "\n";
}