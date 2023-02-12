// author : Eman Elsayed

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    // create a vector of size 26 and initialize it with 0 to count the number of each letter
    vector<int> v(26, 0);
    for (int i = 0; i < str.size(); i++)
    {
        v[str[i] - 'a']++; // count the number of each letter
    }
    int odd = 0; // counter to count number of distinct letters
    for (int i = 0; i < 26; i++)
    {
        // if this letter is exist
        if (v[i] > 0)
        {
            // increment the counter
            odd++;
        }
    }
    // if the number of distinct letters is odd print IGNORE HIM! else print CHAT WITH HER!
    cout << (odd & 1 ? "IGNORE HIM!" : "CHAT WITH HER!");
}