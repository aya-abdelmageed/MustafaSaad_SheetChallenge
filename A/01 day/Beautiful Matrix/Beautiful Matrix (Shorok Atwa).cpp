// Author : Shorok Atwa
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, ans;
    // matrix size is 5 * 5
    int arr[6][6];
    // take an input 
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> arr[i][j];
            // search for 1 in the matrix
            if (arr[i][j] == 1)
            {
                // postion of 1 in matrix
                x = i;
                y = j;
            }
        }
    }
    // we subtract from 3 why ? beacuase matrix is located in its middle (in the cell that is on the intersection of the third row and the third column)
    // arr[3][3]
    ans = abs(x - 3) + abs(y - 3);
    cout << ans;
    return 0;
}
