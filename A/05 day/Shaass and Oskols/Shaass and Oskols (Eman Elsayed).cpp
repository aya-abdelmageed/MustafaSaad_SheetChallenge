#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> brids(n);
    for (auto &i : brids)
        cin >> i;
    int m;
    cin >> m;
    // if test = 4 6 3 , So i have 3 boxes
    // first box exist 1234 and second box exist 123456 and third box exist 123
    // if he shoot 2 4 , so the birds are 1234123 and second box it's brids will fly away and third box will be 12356 and so on

    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        if (l - 1 >= 0)
        {
            brids[l - 1] += r - 1; // r - 1 because the bird in the box will fly to i - 1
        }
        if (l + 1 < n)
        {
            brids[l + 1] += brids[l] - r; // brids[l] - r because the bird in the box will fly to i + 1
        }
        brids[l] = 0; // the bird in the box will die
    }
    for (auto &i : brids)
        cout << i << endl;
    return 0;
}