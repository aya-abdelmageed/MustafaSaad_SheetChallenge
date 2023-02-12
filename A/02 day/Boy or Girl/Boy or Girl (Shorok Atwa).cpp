// Author : Shorok Atwa
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    // we use set beacause each element has to be unique
    set<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        // we insert string element in set to know distinct characters
        st.insert(s[i]);
    }
    // if set size is even program will print CHAT WITH HER! else print IGNORE HIM!"
    cout << (st.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
    return 0;
}
