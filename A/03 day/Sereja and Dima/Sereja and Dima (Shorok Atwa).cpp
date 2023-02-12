// Author : Shorok Atwa
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int l = 0, r = n - 1;
    int s = 0, d = 0;
    bool turn = true;
    while (l <= r)
    {
        if (a[l] >= a[r])
        {
            if (turn)
                s += a[l];
            else

                d += a[l];
            l++;
        }
        else if (a[r] > a[l])
        {
            if (turn)
                s += a[r];
            else
                d += a[r];

            r--;
        }
        if (turn)
            f = false;
        else
            f = true;
    }

    cout << s << " " << d;

    return 0;
}