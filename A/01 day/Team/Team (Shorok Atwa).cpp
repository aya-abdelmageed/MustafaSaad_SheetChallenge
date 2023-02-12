// Author : Shorok Atwa
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b, c, sum = 0, cnt = 0;
    // for loop to take input from the user
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        // sum of three friend
        sum = a + b + c;
        // if sum == 2 or 3 ,that's mean that at least two of them are sure about the solution
        if (sum >= 2)
            // conuter to count the number of problems the friends will implement
            cnt++;
    }
    // print the answer
    cout << cnt;
    return 0;
}
