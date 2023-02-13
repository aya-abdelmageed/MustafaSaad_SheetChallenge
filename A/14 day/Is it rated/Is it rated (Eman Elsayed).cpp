#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> rates(n);
    for (int i = 0; i < n; i++)
    {
        cin >> rates[i].first >> rates[i].second;
    }
    bool maybe = 1, equals = 1;

    for (int i = 0; i < n; i++)
    {
        // to check if all rates is constant to determine if it is rated or not
        equals &= (rates[i].first == rates[i].second);
        if (i > 0) // also if rates is ordered
            maybe &= (rates[i].first <= rates[i - 1].first && rates[i].second <= rates[i - 1].second);
        if (rates[i].first != rates[i].second) // if there exist any changes it will be rated
        {
            cout << "rated\n";
            return;
        }
    }
    cout << (maybe && equals ? "maybe" : "unrated");
}