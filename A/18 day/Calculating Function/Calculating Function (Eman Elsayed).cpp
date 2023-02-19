#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // -1 + 2 -3 + 4 -5 + 6 -7 + 8 -9 + 10 So the sum of the first n odd numbers is n^2 and the sum of the first n even numbers is n^2/2
    cout << (n % 2 ? n / 2 - n : n / 2) << endl;
}