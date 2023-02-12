//              بسم الله الرحمن الرحيم

// author Eman Mohamed
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][3]; // declare the array
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j]; // git the element of the array
            if (arr[i][j] == 1)
                count++; // if the element equal to 1 increament the count
        }
        if (count >= 2)
            res++; // if the count greater than or equal to 2 so the res increament by 1
    }
    cout << res << "\n";
}