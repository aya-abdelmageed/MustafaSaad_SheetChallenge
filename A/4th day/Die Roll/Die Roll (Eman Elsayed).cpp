// author : Eman Elsayed

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = max(a, b); // find the maximum between Wakko and Yakko
    if (ans == 1)
        cout << "1/1"; // if mx = 1 so dot can git 1 , 2 , 3 , 4 , 5, 6 so probability = 6/6 = 1/1
    else if (ans == 2)
        cout << "5/6"; // if mx = 2 so dot can git 2 , 3 , 4 , 5, 6 so probability = 5/6
    else if (ans == 3)
        cout << "2/3"; // if mx = 3 so dot can git 3 , 4 , 5, 6 so probability = 4/6 = 2/3
    else if (ans == 4)
        cout << "1/2"; // if mx = 4 so dot can git 4 , 5, 6 so probability = 3/6 = 1/2
    else if (ans == 5)
        cout << "1/3"; // if mx = 5 so dot can git 5, 6 so probability = 2/6 = 1/3
    else if (ans == 6)
        cout << "1/6"; // if mx = 6 so dot can git 6 so probability = 1/6

    return 0;
}