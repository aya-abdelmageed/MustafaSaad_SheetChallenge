// author "Eman Elsayed"

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b, c;
    int count = 0;
    while (n--)
    {
        cin >> a >> b >> c;
        // if the sum of the three integers is greater than or equal to 2 then the group will solve the problem
        if (a + b + c >= 2)
        {
            // increasing the number of groups that will solve the problem by 1
            count++;
        }
    }
    // printing the number of groups that will solve the problem
    cout << count << endl;
}