//              بسم الله الرحمن الرحيم

// author Eman Mohamed
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h; // get the number and the height of the fence
    vector<int> grid(n);
    int sum = 0;
    for (auto &i : grid)
    {
        cin >> i; // git all the height

        if (i > h) // if the height of the boy greater than the height of the fence so he should bent and the sum increase by 2
            sum += 2;
        else // if not sum will increase by 1
            sum++;
    }
    cout << sum << "\n"; // output the sum
}
