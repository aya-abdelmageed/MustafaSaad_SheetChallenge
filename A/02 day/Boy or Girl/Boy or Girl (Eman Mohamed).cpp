// EMan Mohamed
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    map<char, int> mp;// map to store the frequency of each character
    for (int i = 0; i < s.size(); i++)
    {
        // increment the frequency of the current character
        mp[s[i]]++;
    }
    // get the size of the map
    int sz = mp.size();
    // if the size is even print CHAT WITH HER! else print IGNORE HIM!
    cout << (sz % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << "\n";
}