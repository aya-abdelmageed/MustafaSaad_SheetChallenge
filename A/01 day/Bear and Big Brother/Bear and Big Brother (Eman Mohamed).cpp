//              بسم الله الرحمن الرحيم

// author Eman Mohamed
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b; // git a and b
    int count = 0; // intialize count
    while (a <= b) // while a is less than or equal to b
    {
        a *= 3;  // multiply a by 3
        b *= 2;  // multiply b by 2
        count++; // count the number of the year
    }
    cout << count; // output the number of the year
}