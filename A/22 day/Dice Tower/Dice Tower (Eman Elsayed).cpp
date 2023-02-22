#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t >> n;
    vector<int> a(t), b(t);
    for (int i = 0; i < t; i++)
    {
        cin >> a[i] >> b[i];
        // if any of the dice has the number n or 7 - n
        if (a[i] == n || b[i] == n || a[i] == 7 - n || b[i] == 7 - n)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}