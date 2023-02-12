// EMan Mohamed
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // get the length of the vector
    vector<int> grid(n);
    for (auto &i : grid) // get the vector
        cin >> i;
    int police = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        if (grid[i] >= 0) // if the element greater than 0 the increament value of the police by the value of the element
            police += grid[i];
        else
        {
            if (police > 0) // other wise if the police greater than zero then decrement the value of the police
            {
                police--;
            }
            else
                res++;
        }
    }
    cout << res << "\n"; // output the value of the res
}