// EMan Mohamed
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; // get the length of the string
    string s; // get the string
    cin >> s;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
            count++; // if the two neighbooring character are the same we should increase the count by 1;
    }
    cout << count << "\n"; // output the count
}