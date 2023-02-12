// author : Eman Elsayed

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    // the answer is the minimum between the distance between the first letter and 'a' and 26 - the distance between the first letter and 'a'
    int ans = min(abs(str[0] - 'a'), 26 - abs(str[0] - 'a'));
    // loop on the string and compare each two adjacent letters and add the minimum between the distance between them and 26 - the distance between them to the answer
    for (int i = 0; i < str.size() - 1; i++)
    {
        ans += min(abs(str[i] - str[i + 1]), 26 - abs(str[i] - str[i + 1]));
    }
    // print the answer
    cout << ans << endl;
}