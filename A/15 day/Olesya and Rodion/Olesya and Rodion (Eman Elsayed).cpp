#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    if (t < 10) // if t is less than 10 then we can print it n times
    {
        for (int i = 0; i < n; i++)
        {
            cout << t;
        }
    }
    else // if t is greater than 10 then we can print t and n - sz(t) zeros
    {
        if (n == 1)
        {
            cout << -1 << "\n";
            return;
        }
        cout << t;
        string st = to_string(t);
        n -= st.size();
        for (int i = 0; i < n; i++)
        {
            cout << 0;
        }
    }
}
