// Author : Shorok Atwa
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v(4);
    set<int> st; // set to store the unique numbers
    for (int i = 0; i < 4; i++)
    {
        cin >> v[i];
        st.insert(v[i]); // insert the number in the set
    }
    cout << 4 - st.size(); // print he same horseshoes number
    return 0;
}