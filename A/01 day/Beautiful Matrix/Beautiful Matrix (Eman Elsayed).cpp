// author "Eman Elsayed"

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // the matrix is 5x5
    int a[5][5];
    // the position of the number 1
    int x, y;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
            // if the number is 1
            if (a[i][j] == 1)
            {
                // then the position of the number 1 is (i, j)
                x = i;
                y = j;
            }
        }
    }
    // the minimum number of moves is equal to the absolute value of the difference between the position of the number 1 and the position of the number 2
    cout << abs(x - 2) + abs(y - 2);
    return 0;
}