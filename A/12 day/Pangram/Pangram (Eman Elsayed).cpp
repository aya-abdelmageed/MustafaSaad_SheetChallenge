#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower); // convert all characters to lower case
    map<char, int> mp;                                         // traverse the string and count the number of occurences of each character
    for (int i = 0; i < n; i++)
        mp[str[i]]++;
    cout << (mp.size() == 26 ? "YES" : "NO"); // if the number of occurences of each character is 26 (the number of characters in the alphabet) then the string is a pangram
}