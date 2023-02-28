#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> mp;
    for (int i = 0; i < n && cin >> arr[i]; i++)
    {
        mp[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp[arr[i]] > ceil(double(n) / 2.0))
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}