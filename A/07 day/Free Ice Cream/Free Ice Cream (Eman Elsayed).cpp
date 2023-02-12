// author : Eman Elsayed

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // get input long long to avoid overflow since adding and subtracting 10^9
    long long q, d, cnt = 0;
    cin >> q >> d;
    while (q--)
    {
        char ch;
        int x;
        cin >> ch >> x;
        if (ch == '+' && x + d >= 0) // if x + d >= 0 then d += x
            d += x;
        else if (ch == '-' && d - x >= 0) // if d - x >= 0 then
            d -= x;
        else // if we will get negative value then we will not subtract x from d
            cnt++;
    }
    // print number of ice number of ice cream packs left after all operations, and number of kids that left the house in distress
    cout << d << " " << cnt << endl;
}