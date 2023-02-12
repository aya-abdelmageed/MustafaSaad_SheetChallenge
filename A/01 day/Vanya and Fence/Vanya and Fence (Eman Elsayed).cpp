// Author "Eman Elsayed"

#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int n, h;
    cin >> n >> h;
    int a[n];
    // taking input
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // counting the minimum width
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        // if the height of the i-th person is greater than the fence height
        if (a[i] > h)
        {
            // then he width of the i-th person is equal to 2.
            sum += 2;
        }
        else
        {
            // else the width of the i-th person is equal to 1.
            sum += 1;
        }
    }
    // printing the minimum width
    cout << sum << endl;
    return 0;
}