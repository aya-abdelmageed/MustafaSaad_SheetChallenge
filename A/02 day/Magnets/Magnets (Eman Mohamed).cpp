// EMan Mohamed
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> grid(n);
    for (auto &i : grid)
        cin >> i; // get the vector of string
    int count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (grid[i] != grid[i + 1])
            count++; // if the Magnets not equal the next Magnets this should count solo peice
    }
    cout << count << "\n";
}