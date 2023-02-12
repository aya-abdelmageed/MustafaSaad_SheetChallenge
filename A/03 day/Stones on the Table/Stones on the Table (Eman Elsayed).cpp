// author : Eman Elsayed

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    string str;
    cin >> str;
    // loop on the string and compare each two adjacent letters if they are equal increment the counter
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            cnt++;
        }
    }
    // print the result
    cout << cnt << endl;
}