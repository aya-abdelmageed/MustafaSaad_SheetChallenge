#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> y(2 * n + 1);
    for (auto &i : y)
        cin >> i;
    for (int i = 1; i < 2 * n; i++)
    {
        if (k == 0)
            break;
        if (y[i - 1] < y[i] - 1 && y[i] - 1 > y[i + 1])
        {
            y[i]--;
            k--;
        }
    }
    for (int i = 0; i < y.size(); i++)
    {
        cout << y[i] << " ";
    }
}